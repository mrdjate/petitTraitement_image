//
//  juxta_hori.c
//  retour_adresse
//
//  Created by François DJATE DELBRAH on 20/09/2020.
//  Copyright © 2020 François DJATE DELBRAH. All rights reserved.
//

#include "repertoir.h"

void Juxta_hori(char*fichier,Imagex*picture){
int i,j;
printf("Ecriture=...");//verificateur fonction

FILE*f=fopen(fichier,"w");//ouverture ecriture


fprintf(f,"%c%c\n",picture->magn[0],picture->magn[1]);//mise en place des en-tête du fichier
fprintf(f,"%d %d\n",picture->larg*2,picture->haut);
fprintf(f,"%d\n",picture->valm);


    for(i=0;i<picture->haut;i++){
    
        for(j=0;j<picture->larg;j++){

            fprintf(f,"%d %d %d ",picture->donne[i][j].r,picture->donne[i][j].g,picture->donne[i][j].b);//ecriture trois par trois
            
        }
        for(j=picture->larg-1;j>-1;j--){
            fprintf(f,"%d %d %d ",picture->donne[i][j].r,picture->donne[i][j].g,picture->donne[i][j].b);}
        fprintf(f,"\n");//ne pas oublier de sauter la ligne !!
    }
    fclose(f);
printf("OK\n");//verificateur fonction
}
