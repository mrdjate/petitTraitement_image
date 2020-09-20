//
//  cache.c
//  retour_adresse
//
//  Created by François DJATE DELBRAH on 20/09/2020.
//  Copyright © 2020 François DJATE DELBRAH. All rights reserved.
//

#include "repertoir.h"

void cache(int vara,int* octet,int N)
{
 unsigned char mask1[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
 unsigned char mask2[8]={0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F};
 int i;


    for(i=0;i<N;i++)
        {
            if(!(vara & mask1[7-i]))
            {
             octet[i]=octet[i] & mask2[0];
            }
            else
            {
             octet[i]=octet[i] | mask1[0];
            }
        }
}
