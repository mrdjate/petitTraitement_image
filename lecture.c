//
//  lecture.c
//  retour_adresse
//
//  Created by François DJATE DELBRAH on 20/09/2020.
//  Copyright © 2020 François DJATE DELBRAH. All rights reserved.
//

#include <stdio.h>
#include "repertoir.h"

Imagex  Lecture(char*fichier){
char type[18];
char com[2];


int x,y,vmax,i,j;


Imagex picture;
FILE*f=fopen(fichier,"r");
printf("\nLecture=..");
fscanf(f,"%s",type);
fscanf(f,"%s",com);
if(com[0]=='#'){
    while(fgetc(f)!='\n');
}
else{
    rewind(f);
    fscanf(f,"%s",type);

}

fscanf(f,"%d %d",&x,&y);
fscanf(f,"%d",&vmax);
//printf("%d %d",x,y);

if(type[1]<4 && type[1]>2){
    printf("type p3 ");
    picture.magn[0]=type[0];
    picture.magn[1]=type[1];
    picture.valm=vmax;
    Ini_Imagex(&picture,x,y);

    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            fscanf(f,"%d %d %d",&picture.donne[i][j].r,&picture.donne[i][j].g,&picture.donne[i][j].b);
    }
}
}
else{
    printf("type p2 ");
    picture.magn[0]=type[0];
    picture.magn[1]=type[1];
    picture.valm=vmax;

    Ini_Imagex(&picture,x,y);
for(i=0;i<y;i++){
    for(j=0;j<x;j++){
        fscanf(f,"%d",&picture.donner[i][j]);
    }
}


}
fclose(f);
printf("OK\n_ _ _ _ _ _ _ _ _\n\n");
return picture;
}
