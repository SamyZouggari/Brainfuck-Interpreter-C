🇬🇧 :

## Brainfuck interpreter in C 
I developed a Brainfuck interpreter in C, a project that allowed me to enhance my system programming skills and explore low-level concepts. This project also deepened my understanding of minimalist languages and strengthened my ability to manage limited resources while designing efficient solutions.

Brainfuck is a minimalist programming language created in 1993 by Urban Müller. It is distinguished by its extreme simplicity and use of only eight commands. Although the language is Turing-complete, it is known for being difficult to use due to its lack of traditional syntax and its low-level approach.

The eight commands in Brainfuck are as follows:

    >: Moves the memory pointer one cell to the right.
    <: Moves the memory pointer one cell to the left.
    +: Increments the value of the pointed cell.
    -: Decrements the value of the pointed cell.
    .: Outputs the character corresponding to the ASCII value of the pointed cell.
    ,: Reads a character from user input and stores its ASCII value in the pointed cell.
    [: If the pointed cell is zero, jumps to the instruction after the matching ].
    ]: If the pointed cell is not zero, jumps back to the instruction after the matching [.

Brainfuck operates on a memory array (usually of fixed size), where each cell can store one byte of data. The memory pointer moves through this array according to the instructions, modifying values and performing input/output operations. It is a fascinating example of what can be achieved with a minimal set of features.

🇫🇷 :

## Interpréteur Brainfuck en C
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

Le fonctionnement de Brainfuck repose sur un tableau de mémoire (généralement de taille fixe), où chaque cellule peut stocker un octet de données. Le pointeur de mémoire se déplace à travers ce tableau en fonction des instructions, modifiant les valeurs et effectuant des opérations d'entrée/sortie.
C'est un exemple fascinant de ce qu'il est possible de faire avec un ensemble minimal de fonctionnalités.


