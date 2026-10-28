# Pentax K-1 Mark II — analyse du firmware 2.51

Analyse statique réalisée le **28 octobre 2026** sur le fichier fourni `fwdc240b.bin`.

**Le firmware a été décompressé, ses ressources extraites et 466 fonctions ciblées désassemblées et décompilées en pseudo-C.** Il contient bien des extensions verrouillées, des contrôles liés aux objectifs et une importante infrastructure de développement conservée dans la version distribuée. Cette analyse ne restitue pas le code source original complet et ne comporte aucun essai sur un boîtier.

Les résultats les plus significatifs sont :

- **Quatre fonctions photographiques soumises à activation**, identifiées par leurs libellés d’interface et leurs identifiants internes : ND gradué, Star AF, mise au point fine par télécommande et traitement astrophotographique. Les trois dernières forment l’offre Astrophoto Assist.
- **Quatre profils saisonniers contrôlés par logiciel**, avec sélection d’objectifs compatibles et commandes internes permettant de forcer le résultat du contrôle.
- **Neuf menus de développement**, dont réglages, tests matériels, journaux, données d’étalonnage et opérations sur les objectifs.
- **425 entrées de commandes internes**, réparties entre deux tables nommées `dc` et `cc`.
- Un lecteur de **`SYSPARAM.TXT`** avec des paramètres de diagnostic du traitement RAW, un moteur de scripts et des traces d’un mécanisme d’essai limité.
- **Aucune preuve établie d’une vidéo 4K temps réel déverrouillable, d’une rafale plein format plus rapide ou d’un nouveau mode photographique secret prêt à l’emploi.**

## 1. Portée et niveaux de preuve

| Niveau | Signification |
|---|---|
| **Code** | Instructions, branchements ou tables recoupés dans le binaire ; forte confiance sur ce mécanisme local. |
| **Ressource** | Texte, nom de module ou fichier réellement présent ; ne prouve pas à lui seul que la fonction est accessible. |
| **Documentation** | Fonction ou restriction décrite par Ricoh ; ne constitue pas une validation expérimentale du fichier. |
| **Non établi** | Information que l’analyse ne permet pas de conclure. |

« Disponible » signifie ici proposé par le produit et corroboré lorsque possible par le firmware. **L’état d’activation réel de votre appareil est inconnu** : ce paquet de mise à jour ne contient pas sa mémoire de réglages, ses licences ni son numéro de série personnel.

Les adresses `0x40……` sont les adresses virtuelles utilisées pour le programme principal. Les offsets désignent un déplacement dans le fichier explicitement nommé. Pour `analysis/extracted/main.bin` : **adresse virtuelle = `0x40000000` + offset**. Cette relation ne s’applique pas au fichier d’origine compressé ni à `sub.bin`.

## 2. Identification et extraction

| Élément | Résultat |
|---|---|
| Fichier d’origine | `fwdc240b.bin`, **18 880 016 octets** |
| SHA-256 | `f76874f40f236049c0d53c9bd448846ea325313c43f0f75507d7d62fdbcf0809` |
| Version lisible dans le programme | `Version 2.51`, offset `main:0x001fff41` |
| Identité | `PENTAX K-1 Mark II`, notamment `main:0x001fff2e` |
| Horodatages de construction | `2025/10/24 14:51:42` à `main:0x001fffdc` ; `2025/10/24 14:55:33` à `main:0x015fffdc` |
| Contrôle du paquet | Somme des mots little-endian de 32 bits, modulo 2³² : **0** |
| En-tête | Signature `PENTAX XXXXX`, taille totale cohérente |

La page officielle annonce la version 2.51 le **5 décembre 2025**. Elle corrige notamment le suivi Astrotracer lorsque l’option **Bulb « Type 2 »** est sélectionnée. Cette option Bulb ne doit pas être confondue avec **Astrotracer Type 2**. [Historique Ricoh](https://www.ricoh-imaging.co.jp/english/support/digital/k-1-2.html)

Le champ `0x255` de l’en-tête **n’est pas une version 2.55** : le code le traite comme un identifiant de modèle dans `obs_SpecModelInitialize`. La version 2.51 est identifiée séparément par son texte.

| Partie | Position dans le fichier d’origine | Résultat extrait |
|---|---|---|
| Programme principal | Flux à `0x00000200`, fin après marqueur à `0x00685db2` | **33 554 432 octets**, 1 365 blocs |
| Programme secondaire | Flux à `0x007e0200`, fin après marqueur à `0x007e9209` | **131 072 octets**, 5 blocs |
| Répertoire des ressources | `0x00800200` | **106 fichiers**, lecteurs logiques `A:`, `B:`, `E:` conservés |

La compression est compatible avec l’algorithme LZ à blocs du projet public [pentax-firmware-tool](https://github.com/twang2218/pentax-firmware-tool). Son interface reconnaît les anciens modèles K-S ; un extracteur adapté a donc été écrit pour cet en-tête. **Aucune clé de déchiffrement n’a été nécessaire.** Les deux sorties ont été comparées octet pour octet avec la routine JavaScript amont : elles sont identiques.

Les 32 Mio de l’image principale ne représentent pas 32 Mio de code : elle contient également tables, textes, données et remplissage. Les **10 derniers Mio**, à partir de `0x01600000`, sont entièrement à `0xff`. Les espaces entre les flux compressés et les sections suivantes sont à zéro.

Le programme principal contient du **code ARM 32 bits little-endian et Thumb**. La base `0x40000000` est corroborée par les adresses des commandes et leur désassemblage. Les tables `cmd_cc.txt` et `cmd_dc.txt` pointent respectivement dans les parties basse et haute de cette image. Des mentions **SOFTUNE REALOS/ARM** sont présentes à `0x000f58f0` et `0x0067a560`, ainsi que des chemins de pilotes `M7M` et un pilote Wi-Fi Marvell/iTRON. L’architecture du bloc secondaire n’a pas été déterminée.

Le dossier livré mentionne OpenSSL `3.0.1` et ZXing. Des noms C++ ZXing figurent aussi dans le programme. Le nom du dossier de licence ne suffit pas à déterminer précisément la version de chaque composant réellement lié.

Voir le [manifeste avec tailles et empreintes](analysis/reports/manifest.json), la [comparaison indépendante des décompresseurs](analysis/reports/upstream-verification.json) et les [indices d’identification](analysis/reports/evidence-identity.tsv). La somme de contrôle établit une cohérence interne, pas une authentification cryptographique auprès de Ricoh.

## 3. Fonctionnalités ordinaires disponibles

Cet inventaire couvre les principales familles utiles pour distinguer les fonctions normales des fonctions restreintes ; ce n’est pas une transcription exhaustive du manuel.

| Fonction | Disponibilité documentée | Corroboration locale |
|---|---|---|
| Photo RAW/JPEG | PEF/DNG 14 bits, JPEG ; plein format, APS-C et carré | Services de développement RAW, métadonnées et codec ; ressources d’interface |
| Pixel Shift Resolution II | Composition haute résolution, correction des mouvements, mode à main levée | Modules `Rrs`, commande `IQ_rrstest` |
| Stabilisation et simulation AA | SR II, correction d’horizon, ajustement de composition, simulateur de filtre AA | Services SR et paramètres de correction |
| HDR, multiexposition, intervalles | Modes de composition et capture programmée | `IQ_hdrtest`, services de composition, libellés d’interface |
| Développement interne | Balance des blancs, corrections optiques, bruit, clarté, rendu | Nombreux modules `RawDevelopment…SetMode.cpp` |
| Astrotracer | Types 1, 2 et 3 | Services orbitaux, `CAP_AstroType3`, interface dédiée |
| Vidéo standard | H.264/MOV : 1080 jusqu’à 60i/50i ou 30p/25p/24p ; 720 à 60p/50p | Services et pilote H.264 ; commandes de paramètres vidéo |
| Vidéo par intervalles / Star Stream | 4K par assemblage d’images, Motion JPEG/AVI | Services MJPEG et `SetStarStream` |
| Connexions | Wi-Fi, USB MSC/PTP, commande à distance | Services WLAN, routes HTTP et modules de capture connectée |
| Rendus ajoutés | SATOBI et Gold, plus quatre rendus saisonniers conditionnels | Noms décodés dans les ressources d’interface |

Références : [spécifications Ricoh](https://www.ricoh-imaging.co.jp/english/products/k-1-2/spec/), [évolutions du firmware](https://www.ricoh-imaging.co.jp/english/products/k-1-2/firmup/index.html). Les indices locaux sont réunis dans [evidence-imaging.tsv](analysis/reports/evidence-imaging.tsv) et [ui-english.tsv](analysis/reports/ui-english.tsv).

**Astrotracer Type 3 est une fonction normale du firmware**, distincte de l’extension Astrophoto Assist. Il détermine le mouvement des étoiles à partir d’une prise de vue préalable sans utiliser le GPS. Le Type 2 suit à la moitié de la vitesse du Type 1. [Description Ricoh](https://www.ricoh-imaging.co.jp/english/products/k-1-2/firmup/index.html)

## 4. Fonctions présentes mais soumises à activation

### Quatre fonctions identifiées dans les tables de menus

La table à `main:0x00a208cc` contient quatre enregistrements. Ils relient des identifiants de fonction à des libellés et descriptions multilingues. Le texte anglais emploie des indices de glyphes : pour le sous-ensemble ASCII vérifié, la valeur du caractère est l’octet + 30 ; `0` termine le texte et `1` marque un retour à la ligne. Cela explique pourquoi une recherche ASCII brute manque ces noms.

| Libellé décodé | ID interne | Offset du texte anglais | Valeur dans la table par défaut du modèle `0x255` |
|---|---:|---|---:|
| `Grad ND Simulator` | **2** | `0x00e90958` | 0 |
| `Star AF` | **11** | `0x00e9794a` | 0 |
| `Remote Ctrl. Focus Fine Adj.` | **14** | `0x00e99694` | 0 |
| `Astrophoto Image Processing` | **17** | `0x00e9b7a2` | 0 |

**Preuve : code + ressources + documentation.** Le ND gradué fusionne deux expositions avec une transition paramétrable. [Présentation officielle](https://www.ricoh-imaging.co.jp/english/products/k-1-2/premium/gradnd/)

Astrophoto Assist regroupe la mise au point sur les étoiles en Live View, le réglage fin par télécommande O-RC1 et six traitements d’image astronomique, dont luminosité des étoiles, fond de ciel et franges colorées. [Présentation officielle](https://www.ricoh-imaging.co.jp/english/products/k-1-2/premium/astro/)

La page officielle décrit une activation par code matriciel associé au numéro de série. [Activation Ricoh](https://www.ricoh-imaging.co.jp/english/products/k-1-2/premium/). Une offre Astrophoto Assist est également publiée sur la boutique américaine : il serait donc inexact de déclarer cette fonction exclusivement japonaise aujourd’hui. Sa disponibilité commerciale en France n’a pas été vérifiée. [Boutique Ricoh USA](https://us.ricoh-imaging.com/product/premium-feature-astrophoto-assist/)

### Mécanisme observé

Le code `obs_LoadFeatureAvailability` à **`0x408d95f4`** construit un tableau de **20 états de disponibilité** à partir de trois sources :

1. une table de valeurs par défaut dépendant du modèle ;
2. des bits issus de données persistantes de fonctions spéciales ;
3. un indicateur associé à une structure d’essai de la fonction.

Le lecteur à **`0x408d9998`** retourne ensuite l’état demandé pour un indice inférieur à 20. Les 16 ressources `B:\SpFFlg01.bin` à `B:\SpFFlg16.bin` et leur gestionnaire sont présents. Dans le paquet, ces fichiers sont des valeurs d’initialisation, **pas l’état d’un appareil particulier**. Le nombre de fichiers ou d’indices ne prouve pas l’existence de 16 ou 20 options photographiques cachées.

Chaque entrée de menu possède aussi un **second identifiant de contrôle** : 9, 12, 15 et 18. Le code de menu les consulte pour la disponibilité de l’action ; leur portée complète, notamment régionale, n’a pas été reconstruite. Il ne faut pas les compter comme quatre autres fonctions.

Le parcours `FunctionReleaseCodeModel`, notamment **`0x408da110`**, lit des données désignées comme numéro de série, calcule des valeurs de comparaison de 32 octets et examine des identifiants de fonction. Le détail cryptographique n’a pas été entièrement caractérisé ; aucune clé d’activation n’a été produite.

Des libellés `Trial Ver.`, `Start Trial Version` et une description d’essai limité sont décodés. Le programme contient `B:\TrialInf.bin`, `TrialDataService` et du code d’état/temps restant. **Le mécanisme d’essai existe**, mais sa durée, ses conditions d’accès et son activation effective sur votre appareil ne sont pas établies.

Preuves : [table des quatre fonctions](analysis/reports/premium-features.json), [valeurs par défaut](analysis/reports/feature-defaults.json), [chargement des états](analysis/decompiled/408d95f4_obs_LoadFeatureAvailability.c), [lecture d’un état](analysis/decompiled/408d9998_obs_GetFeatureAvailability.c), [contrôle du code d’activation](analysis/decompiled/408da110_obs_CheckFunctionReleaseCode.c), [menu des fonctions limitées](analysis/decompiled/407fecc4_obs_LimitedFunctionMenuList.c).

## 5. Profils saisonniers : restriction par objectif et forçage interne

Le contrôle à **`0x408a48c8`** reçoit un identifiant de rendu et une classe d’objectif. Pour quatre rendus, il combine un état de disponibilité et une liste de classes autorisées. Un indicateur de développement peut rendre ce contrôle positif indépendamment de cette combinaison.

| Rendu | ID de rendu | ID de disponibilité | Classes d’objectifs acceptées dans cette routine | Commande interne retrouvée |
|---|---|---:|---|---|
| HARUBENI / printemps | `0x2c` | 3 | 3, 15 | `ForcedActivationSpring` |
| KATEN / été | `0x2d` | 4 | 8, 9 | `ForcedActivationKaten` |
| KYUSHU / automne | `0x2e` | 5 | 1, 11, 12, 13 | `ForcedActivationAutumn` |
| FUYUNO / hiver | `0x2f` | 6 | 5, 14 | `ForcedActivationWinter` |

Les classes sont des indices internes, pas des identifiants EXIF directement utilisables. Le classement est calculé à partir de plusieurs propriétés de l’objectif dans `obs_ClassifyLens`.

Ricoh documente les associations suivantes : HARUBENI avec HD FA 77 mm et HD DA 20–40 mm ; KATEN avec HD D FA 21 mm et HD DA 15 mm ; KYUSHU avec HD FA 43 mm et HD DA 21/40/70 mm ; FUYUNO avec HD FA 31 mm et HD DA 35 mm Macro. [Compatibilités officielles](https://www.ricoh-imaging.co.jp/english/products/k-1-2/firmup/index.html)

Les huit commandes de forçage et d’annulation sont reliées à des fonctions dans la table **`main:0x00a048dc`**. Par exemple, `ForcedActivationSpring` à **`0x409c8410`** passe la valeur 1 au setter **`0x408a4868`**. Les setters écrivent quatre octets consécutifs à partir de **`0x41203e5c`**, ensuite lus par le contrôle de disponibilité. La catégorie correspondante est nommée `CustomImage` ; `app_debug` effectue un appel indirect vers la fonction sélectionnée.

Reconstruction simplifiée de la logique locale, vérifiée dans le désassemblage :

```c
// Pour chacun des quatre profils saisonniers seulement.
eligible = seasonal_override[season];
if (feature_available[feature_id] && lens_class_is_allowed)
    eligible = true;
return eligible;
```

**Conclusion : le contrôle logiciel et son forçage de développement sont démontrés.** En revanche, l’accès utilisateur à la console, l’activation sur un boîtier de série, la persistance après redémarrage et le comportement photographique complet ne sont pas démontrés. Il ne s’agit pas d’une procédure de déverrouillage testée.

Preuves : [contrôle des profils](analysis/decompiled/408a48c8_obs_CustomImageEligibility.c), [classement des objectifs](analysis/decompiled/408d8c44_obs_ClassifyLens.c), [commande de forçage](analysis/decompiled/409c8410_ForcedActivationSpring.c), [setter](analysis/decompiled/408a4868_obs_SetSpringOverride.c), [répartiteur app_debug](analysis/decompiled/409c8284_app_debug.c).

## 6. Fonctions de développement et de maintenance cachées

### Neuf menus de développement

Les neuf titres et leurs options figurent dans le programme. Les menus 1 et 5 ont également été décompilés : les libellés sont utilisés par de véritables routines d’interface, avec traitement des sélections.

| Menu | Offset de son titre dans `main.bin` | Fonctions indiquées par les libellés |
|---|---|---|
| 1 | `0x009070ec` | Mode debug, porte carte, écriture fournisseur, scripts, autotests, remise à zéro des données utilisateur, code région |
| 2 | `0x008b6a7c` | Import/export d’étalonnages CPU/DSP, journaux caméra, données NF |
| 3 | `0x008b713c` | Tests boutons, carte, écran, mémoire, audio ; vieillissement par déclenchements |
| 4 | `0x008b786c` | Écrans, niveau électronique, affichage AF, nettoyage du capteur, tests Live View |
| 5 | `0x0094297c` | Lecture/écriture ROM d’objectif, firmware de CPU d’objectif, contrôle des communications |
| 6 | `0x008b8010` | Entrée série, niveaux de journalisation, export/effacement des journaux et exceptions |
| 7 | `0x008b8900` | Versions du firmware, carte, puce DSP, informations de compilation |
| 8 | `0x008b8d00` | Export de zone temporaire NAND, import/export de données utilisateur |
| 9 | `0x008b9274` | Tests Wi-Fi/NFC, SDIO, GPS, journal GPS, compas et Astrotracer |

Une mention de test **NFC** ne prouve pas un équipement NFC exploitable sur ce modèle : le code peut être partagé entre produits. De même, les fonctions d’écriture de ROM et d’étalonnage sont des outils de maintenance, pas des améliorations photographiques ordinaires.

Preuves : [indices de diagnostic](analysis/reports/evidence-debug.tsv), [menu 1 décompilé](analysis/decompiled/40906d8c_obs_DevelopmentMenu1.c), [menu 5 décompilé](analysis/decompiled/40942604_obs_DevelopmentMenu5.c).

### Console interne : 346 + 79 entrées

`A:\cmd_dc.txt` expose **346 couples nom/adresse** ; `A:\cmd_cc.txt` en expose **79**. Leurs 425 points d’entrée ont été traités par Ghidra. Les noms ne permettent pas de présumer que les commandes sont accessibles par USB ou Wi-Fi.

| Famille | Exemples réellement présents | Portée observée |
|---|---|---|
| Capture et traitement | `CAP_rawcodec`, `CAP_JpgEnc`, `CAP_BayerResize`, `CAP_Blend`, `IQ_nrtest`, `IQ_hdrtest`, `IQ_rrstest` | Tests des chaînes de traitement |
| Astronomie / MAP | `CAP_AstroType3`, `VIEW_Fwhm`, `VIEW_FineFocus`, `SAF_EnableFwhmOnlySequence`, `SAF_EnableDummyInFocus` | Paramètres et séquences de test du suivi et de l’AF |
| Contrôle caméra | `camctl_setmovieS`, `camctl_setmovieF`, `camctl_sethdr`, `camctl_setwifi`, `SW_*` | Réglages et simulation de boutons |
| État matériel / OS | `SYS_Gitinfo`, `SYS_lenscpuinfo`, `SYS_tskt`, `SYS_memt`, `SYS_reg` | Informations de compilation, tâches, mémoire et registres |
| Fichiers / maintenance | `MED_fread`, `MED_fwrite`, `MED_nfformat`, `SYS_WriteHwDefectMem` | Accès aux supports et données de maintenance |

Exemple confirmé au niveau instructions : `SAF_EnableFwhmOnlySequence` convertit un argument en booléen, modifie un champ de la structure AF et règle un second paramètre. C’est davantage qu’un nom de commande abandonné ; cela ne garantit toutefois pas son accessibilité externe.

Voir le [catalogue intégral des commandes](analysis/reports/commands.tsv), les [tables originales](analysis/extracted/resources/A/) et l’[index des décompilations](analysis/decompiled/index.tsv).

### Paramètres RAW dans `SYSPARAM.TXT`

La fonction **`0x4065b124`** ouvre le chemin interne `C:\SYSPARAM.TXT`, lit au maximum **1 024 octets**, analyse des noms de paramètres et modifie une structure de configuration. Les comparaisons et affectations sont présentes dans le code.

Parmi les noms reconnus :

| Paramètre | Interprétation étayée par le nom et le traitement local |
|---|---|
| `STOREBAYER` | Indicateur de stockage de données Bayer de diagnostic |
| `DISABLE_ALL_NR` | Indicateur de désactivation de réduction de bruit |
| `DISABLE_DARK_SUBTRACT` | Indicateur de désactivation de soustraction d’image noire |
| `DISABLEDPC` / `DISABLE_DPC_*` | Paramètres de correction des pixels défectueux |
| `STORE_LV_STAR_AF_BAYER` | Conservation de données Bayer liées au Star AF en Live View |
| `ENABLE_ROLLING_STILL` | Option interne portant ce nom ; mode utilisable non établi |
| `FORCE_SET_CROP_MODE`, `FORCE_SET_DIGITAL_GAIN` | Autres paramètres nommés dans le gestionnaire de diagnostic |

Le lecteur est appelé par **`0x4065cc88`**, qui vérifie un état « déjà chargé » et une condition obtenue via **`0x4064f5f0`**. Cette condition n’a pas été entièrement interprétée. **La présence du fichier sur une carte ne suffit donc pas à affirmer qu’il sera pris en compte.** Les effets de bout en bout sur les RAW, notamment l’accélérateur matériel et toutes les étapes de réduction du bruit, n’ont pas été mesurés.

Preuves : [lecteur et analyseur](analysis/decompiled/4065b124_obs_LoadSysparamFile.c), [condition d’appel](analysis/decompiled/4065cc88_obs_SysparamLoadGate.c).

### Scripts et commande réseau

Un moteur de scripts est attesté par `ScriptApplication`, `SYS_script`, `SCRIPT EN MODE` et les chemins `C:\script\startup.ttl` / `shutdown.ttl`. Leur déclenchement et le langage complet n’ont pas été reconstitués.

Des routes HTTP sont aussi présentes, notamment `/v1/apis`, `/v1/props`, `/v1/params/camera`, `/v1/camera/shoot`, `/v1/liveview`, `/v1/lens/focus` et `/v1/photos/:path`. Elles correspondent à une infrastructure de contrôle et de transfert Wi-Fi. **Aucune interrogation réseau du boîtier n’a été réalisée**, et ces routes ne démontrent pas un accès à la console de développement. [Indices des interfaces](analysis/reports/evidence-interfaces.tsv)

## 7. Limites : ce qui n’est pas démontré comme « bridage »

| Proposition | État des conclusions |
|---|---|
| Vidéo 4K temps réel cachée | **Non établi.** La 4K documentée concerne les intervalles et Star Stream. La présence de H.264, MJPEG ou d’un réglage de résolution ne prouve pas un mode continu 4K. |
| 1080p60 progressif caché | **Non établi.** Les spécifications distinguent 1080/60i et 720/60p. |
| Rafale plein format supérieure à 4,4 i/s | **Non établi.** La valeur documentée de 6,4 i/s concerne l’APS-C ; aucune chaîne complète permettant une rafale plein format supérieure n’a été validée. |
| Suppression de la limite vidéo | La limite publiée est **25 minutes ou 4 Go**. Aucun correctif ni point de contrôle unique permettant sa suppression n’a été établi. |
| Nouveau mode RAW sans aucun traitement | Des indicateurs de diagnostic existent, mais leur effet global sur toute la chaîne n’est pas démontré. |
| Focus stacking / bracketing de MAP automatique caché | **Non établi.** Les commandes de déplacement de MAP et tests AF ne prouvent pas un mode de stacking intégré. |
| Fonctions premium déjà activées sur votre appareil | Impossible à déterminer avec ce seul paquet. |
| Retour à une ancienne version | Ricoh annonce une restriction de retour en arrière ; le mécanisme complet d’anti-retour n’a pas été reconstruit. |

Références pour les limites publiées : [spécifications](https://www.ricoh-imaging.co.jp/english/products/k-1-2/spec/), [FAQ vidéo et intervalles](https://www.ricoh-imaging.co.jp/english/support/qa/k-1-2/), [historique 2.51](https://www.ricoh-imaging.co.jp/english/support/digital/k-1-2.html). Une limite commerciale publiée ne permet pas, à elle seule, de distinguer contrainte matérielle, thermique, logicielle ou choix de produit.

## 8. Fichiers livrés et reproduction

| Fichier / dossier | Contenu |
|---|---|
| [analysis/extracted/](analysis/extracted/) | Images décompressées et 106 ressources |
| [analysis/decompiled/](analysis/decompiled/) | **466 fichiers pseudo-C et 466 désassemblages**, plus index |
| [analysis/ghidra_project/](analysis/ghidra_project/) | Projet Ghidra local `PentaxK1II`, programme `main.bin` |
| [analysis/reports/](analysis/reports/) | Manifestes, empreintes, chaînes avec offsets, tables, preuves et journaux |
| [analysis/tools/](analysis/tools/) | Extraction Python, rapports, vérification indépendante, script Java et lanceur Ghidra |
| [analysis/vendor/](analysis/vendor/) | Instantané du décompresseur public et licence, métadonnées de Ghidra, Capstone local |

Les 466 cibles comprennent **425 entrées des tables de commandes et 41 fonctions complémentaires**. Toutes ont produit un résultat de décompilation. Cela mesure la réussite de l’outil sur ces cibles, **pas la couverture du firmware ni l’exactitude de tous les types inférés**. Les appels virtuels C++, signatures, certaines variables et structures restent approximatifs ; des avertissements de sauts indirects subsistent dans des sorties. Les fonctions `obs_*` portent des noms attribués par l’analyse. Le préfixe `cc_` évite les collisions avec les noms de la table `dc`.

L’analyse Ghidra est volontairement ciblée : import binaire à `0x40000000`, langage `ARM:LE:32:v7`, création des fonctions sélectionnées et de deux niveaux d’appels directs. Il n’y a pas eu de décompilation exhaustive, d’émulation complète, de comparaison avec une version précédente ou de validation matérielle.

Depuis ce dossier, les étapes reproductibles sont :

```sh
# Python 3, sans dépendance externe pour l’extraction et les rapports.
python3 analysis/tools/extract_firmware.py
python3 analysis/tools/build_reports.py

# Node.js : comparaison avec l’algorithme JavaScript original.
node analysis/tools/verify_upstream.js

# Ghidra 12.2 + JDK compatible, reprise du projet livré.
bash analysis/tools/run_ghidra.sh /chemin/vers/ghidra_12.2_PUBLIC process

# Pour un projet neuf, utiliser « import » à la place de « process ».
```

Sur cette machine, Node a été utilisé depuis l’application ChatGPT, et Ghidra officiel a été téléchargé dans `/private/tmp/pentax-ghidra/`. La distribution Ghidra ne fournissant pas le décompilateur natif macOS ARM, il a été compilé à partir de ses sources incluses :

```sh
# Dans Ghidra/Features/Decompiler/src/decompile/cpp :
make -j6 ghidra_opt ARCH_TYPE='-arch arm64' OSDIR=mac_arm_64 \
    ADDITIONAL_FLAGS='-mmacosx-version-min=11.0'
# Puis placer ghidra_opt sous :
# Ghidra/Features/Decompiler/os/mac_arm_64/decompile
```

Distribution utilisée : [Ghidra 12.2 officiel](https://github.com/NationalSecurityAgency/ghidra/releases/tag/Ghidra_12.2_build). Les empreintes des sources auxiliaires sont dans [vendor-sha256.json](analysis/reports/vendor-sha256.json). L’extracteur adapté conserve l’attribution et la licence GPL-2.0 de l’algorithme amont.

Le firmware original est resté intact. Les images extraites sont des **artefacts d’analyse, pas des fichiers de mise à jour à flasher**. Aucun déverrouillage, changement de mémoire du boîtier ni commande de maintenance n’a été exécuté.
