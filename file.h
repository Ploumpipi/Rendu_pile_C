#ifndef H_FILE
#define H_FILE

typedef struct Element Element;
struct Element
{
    char* chaine;
    Element *suivant;
    Element *actuel;
};

typedef struct File File;
struct File
{
    Element *premier;
    Element *dernier;
    int taille;
};

File *initialiser();
void enfiler(File *file, char* nvChaine);
int defiler(File *file);
void afficherFile(File *file);
void retourneTaille(File *file);
void premierElement(File *file);
void dernierElement(File *file);

#endif
