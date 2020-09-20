//
//  miroir_verti.c
//  retour_adresse
//
//  Created by François DJATE DELBRAH on 20/09/2020.
//  Copyright © 2020 François DJATE DELBRAH. All rights reserved.
//

#include "repertoir.h"

void Miroir_verti(char*fichier,Imagex*picture)
{    int i,j;

printf("Ecriture=...");
FILE*f=fopen(fichier,"w");
fprintf(f,"%c%c\n",picture->magn[0],picture->magn[1]);
fprintf(f,"%d %d\n",picture->larg,picture->haut);
fprintf(f,"%d\n",picture->valm);


for(i=picture->haut-1;i>-1;i--){
    
    for(j=picture->larg-1;j>-1;j--){
        fprintf(f,"%d %d %d ",picture->donne[i][j].r,picture->donne[i][j].g,picture->donne[i][j].b);
    }fprintf(f,"\n");
}
fclose(f);
printf("OK\n");
}
