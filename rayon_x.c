//
//  rayon_x.c
//  retour_adresse
//
//  Created by François DJATE DELBRAH on 20/09/2020.
//  Copyright © 2020 François DJATE DELBRAH. All rights reserved.
//

#include "repertoir.h"
 Imagex rayon_x(Imagex* mon_image_cache){
 unsigned char mask1[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
 unsigned char mask2[8]={0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F};
Imagex retour;
retour.valm=mon_image_cache->valm;

Ini_Imagex( &retour,mon_image_cache->larg/8,mon_image_cache->haut);
int i,j,jp=0,k=7;
int vara=0;

for(i=0;i<mon_image_cache->haut;i++){
        jp=0;
        for(j=0;j<mon_image_cache->larg;j++){
            if(mon_image_cache->donner[i][j] & mask1[0]){
                vara=vara | mask1[k];

            }
            k--;
            if((j+1)%8==0 && j !=0){
                retour.donner[i][jp]=vara;
                vara=0;
                jp++;
                k=7;
            }


        }
    }
 

return retour;


}
