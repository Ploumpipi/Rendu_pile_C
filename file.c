#include <stdio.h>
#include <stdlib.h>
#include "file.h"

File *initialiser()
{
    File *file = malloc(sizeof(*file));
    file->premier = NULL;
    file->taille = NULL;

    return file;
}


void enfiler(File *file, char* nvChaine)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (file == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->chaine = nvChaine;
    nouveau->suivant = NULL;

    if (file->premier != NULL) /* La file n'est pas vide */
    {
        /* On se positionne à la fin de la file */
        Element *elementActuel = file->premier;
        while (elementActuel->suivant != NULL)
        {
            elementActuel = elementActuel->suivant;
            file->dernier = nouveau;
        }
        elementActuel->suivant = nouveau;
        file->taille++;
    }
    else /* La file est vide, notre élément est le premier */
    {
        file->premier = nouveau;
    }
}


int defiler(File *file)
{
    if (file == NULL)
    {
        exit(EXIT_FAILURE);
    }

    int nombreDefile = 0;

    /* On vérifie s'il y a quelque chose à défiler */
    if (file->premier != NULL)
    {
        Element *elementDefile = file->premier;

        nombreDefile = elementDefile->chaine;
        file->premier = elementDefile->suivant;
        free(elementDefile);
        file->taille--;
    }

    return nombreDefile;
}

void afficherFile(File *file)
{
    if (file == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *element = file->premier;

    while (element != NULL)
    {
        printf("%s ", element->chaine);
        element = element->suivant;
    }

    printf("\n");
}

void retourneTaille(File *file)
{
    printf("la taille est : %d ", file->taille + 1);
}

void premierElement(File *file)
{
    if (file == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *element = file->premier;

    if(file->premier != NULL){
        printf(" Le premier element est : %s", element->chaine);
    }
}

void dernierElement(File *file)
{
    if (file == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *element = file->dernier;

    if(file->dernier != NULL){
        printf(" Le dernier element est : %s", element->chaine);
    }
}


