J'ai réalisé un interpréteur Brainfuck en C, un projet qui m'a permis de développer mes compétences en programmation système et d'explorer la manipulation de concepts bas niveau. Ce projet m'a également permis de mieux comprendre le fonctionnement des langages minimalistes et de renforcer ma capacité à gérer des ressources limitées tout en concevant des solutions efficaces.

Brainfuck est un langage de programmation minimaliste conçu en 1993 par Urban Müller. Il se distingue par son extrême simplicité et son utilisation de seulement huit commandes. Bien que le langage soit turing-complet, il est réputé pour être difficile à utiliser en raison de son absence de syntaxe traditionnelle et de son approche bas niveau.

Les huit commandes de Brainfuck sont les suivantes :

    > : Déplace le pointeur mémoire d'une cellule vers la droite.
    < : Déplace le pointeur mémoire d'une cellule vers la gauche.
    + : Incrémente la valeur de la cellule pointée.
    - : Décrémente la valeur de la cellule pointée.
    . : Affiche le caractère correspondant à la valeur ASCII de la cellule pointée.
    , : Lit un caractère de l'entrée utilisateur et stocke sa valeur ASCII dans la cellule pointée.
    [ : Si la cellule pointée est égale à zéro, saute à l'instruction après le ] correspondant.
    ] : Si la cellule pointée n'est pas égale à zéro, revient à l'instruction après le [ correspondant.
