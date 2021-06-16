#include <stdio.h>
#include <stdlib.h>
#include "file.h"



int main()
{
    File *maFile = initialiser();

    enfiler(maFile, "1ere place, ");
    enfiler(maFile, "2eme place, ");
    enfiler(maFile, "3eme place, ");
    enfiler(maFile, "4eme place, ");
    enfiler(maFile, "5eme place, ");
    enfiler(maFile, "6eme place.");

    printf("\nEtat de la file :\n");

    afficherFile(maFile);

    printf("\nJe defile %s\n", defiler(maFile));
    printf("Je defile %s\n", defiler(maFile));

    printf("\nEtat de la file :\n");
    afficherFile(maFile);

    retourneTaille(maFile);

    printf("\n");

    premierElement(maFile);

    printf("\n");

    dernierElement(maFile);


    return 0;
}


