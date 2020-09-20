//
//  fonction_ini_imagex.c
//  retour_adresse
//
//  Created by François DJATE DELBRAH on 20/09/2020.
//  Copyright © 2020 François DJATE DELBRAH. All rights reserved.
//

#include "repertoir.h"

void Ini_Imagex(Imagex* picture ,int x,int y){
    int i;

    picture->larg=x;
    picture->haut=y;

    picture->donne=(Impix**)malloc(y*sizeof(Impix*));
    for(i=0;i<y;i++){
        picture->donne[i]=(Impix*)malloc(x*sizeof(Impix));
    }
}
