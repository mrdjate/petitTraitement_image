//
//  repertoir.h
//  retour_adresse
//
//  Created by François DJATE DELBRAH on 20/09/2020.
//  Copyright © 2020 François DJATE DELBRAH. All rights reserved.
//

#ifndef repertoir_h
#define repertoir_h

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int r;
    int g;
    int b;
    
}Impix;

typedef struct
{
    char magn[2];
     int larg;
     int haut;
     int valm;
     int ** donner;
     Impix** donne;
    
}Imagex;

void Ini_Imagex(Imagex*,int,int);
void Ini_Imagex(Imagex*,int,int);
Imagex  Lecture(char*);
void Ecriture(char*,Imagex* );


/* partie VI */
void Liberer (Imagex);
void Copi_txt(char*);
void Miroire_h(char*,Imagex*);
void Miroire_v(char*fichier,Imagex*picture);
void Juxtaposition_h(char*,Imagex*);
void Juxta_verti(char*,Imagex*);
void Rotata_270(char*fichier,Imagex*picture);

/* partie VII */
Imagex aide_cache(Imagex*,Imagex*);
void cache(int vara,int * octet ,int N);
Imagex rayon_x(Imagex* ninja);

#endif /* repertoir_h */
