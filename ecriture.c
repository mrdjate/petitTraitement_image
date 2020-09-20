//
//  ecriture.c
//  retour_adresse
//
//  Created by François DJATE DELBRAH on 20/09/2020.
//  Copyright © 2020 François DJATE DELBRAH. All rights reserved.
//

#include "repertoir.h"

void Ecriture(char*fichier,Imagex* picture){
int i,j;
printf("Ecriture=...");
FILE*f=fopen(fichier,"w");


if (picture->magn[1]<4 &&  picture->magn[1]>2){
    printf("bibi");
    fprintf(f,"%c%c\n",picture->magn[0],picture->magn[1]);
    fprintf(f,"%d %d\n",picture->larg,picture->haut);
    fprintf(f,"%d\n",picture->valm);
    for(i=0;i<picture->haut;i++){
    
        for(j=0;j<picture->larg;j++){
            fprintf(f,"%d %d %d ",picture->donne[i][j].r,picture->donne[i][j].g,picture->donne[i][j].b);
    }fprintf(f,"\n");
}}
else{
    
    //printf("%d %d \n",picture->magn[0],picture->magn[1]);
    fprintf(f,"%c%c\n",'P','2');

fprintf(f,"%d %d\n",picture->larg,picture->haut);
fprintf(f,"%d\n",picture->valm);
    for(i=0;i<picture->haut;i++){
    
    for(j=0;j<picture->larg;j++){
        
        fprintf(f,"%d ",picture->donner[i][j]);
    }fprintf(f,"\n");
}
}
fclose(f);
printf("OK\n");
}
