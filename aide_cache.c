//
//  aide_cache.c
//  retour_adresse
//
//  Created by François DJATE DELBRAH on 20/09/2020.
//  Copyright © 2020 François DJATE DELBRAH. All rights reserved.
//

#include "repertoir.h"

Imagex aide_cache(Imagex* petite,Imagex* grande){

    /* verificateur de rapport 8/8*/
Imagex mon_image_cache ;
mon_image_cache.magn[0]=80;

mon_image_cache.magn[1]=50;


mon_image_cache.valm=grande->valm;

Ini_Imagex( &mon_image_cache,grande->larg,grande->haut);

int gi,gj,k=0,jp=0,m,v=0,i=0;
int octet[8];

    for(gi=0;gi<grande->haut;gi++ )
    {
        jp=0;
        k=0;
        
        for(gj=0;gj<grande->larg;gj++)
        {
            octet[k]=grande->donner[gi][gj];
            k++;
            if((gj+1)%8==0 && gj !=0)
            {
                cache(petite->donner[gi][jp],octet,8);
                k=0;
                 
                    for(m=0;m<8;m++)
                    {
                        v++;
                        i=8;
                        mon_image_cache.donner[gi][(gj-7)+m]=octet[m];
                    }
                   
                jp++;

            }
            
            ;
         
        }

    }

return mon_image_cache ;

}
