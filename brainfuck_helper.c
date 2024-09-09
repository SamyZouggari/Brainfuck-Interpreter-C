#include <assert.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "brainfuck_helper.h"

#define DATA_ARRAY_SIZE 32000
/*ma structure est un tableau de tuples*/
struct boucle{
    char* debut; // Pointeur vers le caractère de début de la boucle
    char* fin; // Pointeur vers le caractère de fin de la boucle
};


void affiche(char tab[], uint32_t taille){
    for (uint32_t i=0; i<taille; i++) {
        printf("%c", tab[i]);
    }
    printf("\n");
}


char* get_input_prog(char* input_filename){
    FILE* file = fopen(input_filename,"r");
    if (file==NULL){
        return NULL;
    }
    char* tab;
    uint32_t taille=0;
    // Calcul de la taille du programme
    while(!feof(file)){
        fgetc(file);taille++;
    }
    // Allocation de mémoire pour stocker le programme
    tab=malloc((taille+1)*sizeof(char));
    // Réinitialisation de la position du fichier
    rewind(file);
    // Lecture du programme dans le fichier
    for(uint32_t i=0; i<taille;i++){
        tab[i]=fgetc(file);
    }
    tab[taille-1]='\0'; // Ajout de '\0' de fin de chaîne
    fclose(file);
    return tab;
}

void free_input_prog(char* input_prog){
    free(input_prog);
}

void* build_loops(char* input_prog){
    uint32_t n=0;
    char* caractere=input_prog;
    uint32_t i=0;
    // Comptage du nombre de boucles
    while(caractere[i]!='\0'){
        if (caractere[i]=='['){
            n++;
        }
        i++;
    }
    // Allocation de mémoire pour stocker les boucles
    struct boucle* boucles=malloc(n*sizeof(struct boucle));
    i=0;
    n=0;
    // Recherche des positions de début et de fin de chaque boucle
    while(caractere[i]!='\0'){
        if (caractere[i]=='['){
            boucles[n].debut=&caractere[i];
            boucles[n].fin=NULL;
            n++;
        }
        else if (caractere[i]==']') {
            uint32_t j=0;
            // Recherche de la position de fin de la boucle
            while (boucles[n-1-j].fin!=NULL && i!=(1+j)){
                j++;
            }
            boucles[n-1-j].fin=&caractere[i];
        }
        i++;
    }
    return boucles;
}

void free_loops(void* loops){
    free(loops);
}

void execute_instruction(char** ipp, uint8_t** dpp,void* loops){
    struct boucle* boucles;
    boucles= loops; 
    if (**ipp == '+'){
        (**dpp)++;
    }
    else if (**ipp== '-'){
        (**dpp)--;
    }
    else if (**ipp=='>'){
        (*dpp)++;
    }
    else if (**ipp=='<'){
        (*dpp)--;
    }
    else if (**ipp==','){
        (**dpp)=getchar();
    }
    else if (**ipp=='['){
        // Si la valeur pointée par dpp est zéro, passer à la fin de la boucle
        if (**dpp==0){
            uint32_t i=0;
            // trouver le début de la boucle en itérant sur la structure, pour aller à la fin correspondante
            while (boucles[i].debut != *ipp){
                i++;
            }
            *ipp=boucles[i].fin;
        }
        else {
            (*ipp)++;
            return;
        }
    }
    else if (**ipp==']'){
        // Si la valeur pointée par dpp n'est pas zéro, retourner au début de la boucle
        if (**dpp!=0){
            uint32_t i=0;
            // trouver la fin de la boucle en itérant sur la structure, pour aller au début correspondant
            while (boucles[i].fin != *ipp){
                i++;
            }
            *ipp=boucles[i].debut;
        }
        else {
            (*ipp)++;
            return;
        }
    }
    else if (**ipp=='.'){
        printf("%c",**dpp); // Afficher le caractère correspondant à la valeur pointée par dpp
    }
    (*ipp)++;
    return;
}

