//
//  libérer.c
//  retour_adresse
//
//  Created by François DJATE DELBRAH on 20/09/2020.
//  Copyright © 2020 François DJATE DELBRAH. All rights reserved.
//

#include "repertoir.h"


void Liberer(Imagex picture){
    int i;
    if( picture.magn[1]<4 &&  picture.magn[1]>2)
    {
        for(i=0;i<picture.haut;i++){
        
            free(picture.donne[i]);
        }
    free(picture.donne);
        
    }
    else{
        for(i=0;i<picture.haut;i++){
        
            free(picture.donner[i]);
        }
    free(picture.donner);
    }
}
