//
//  copie_img.c
//  retour_adresse
//
//  Created by François DJATE DELBRAH on 20/09/2020.
//  Copyright © 2020 François DJATE DELBRAH. All rights reserved.
//

#include "repertoir.h"

void copie_img(char*fichier){
    
    Imagex picture;//"OneDrive_1_3-6-2018/image1.txt"

    
    
    Lecture(fichier);
    
    
    Ecriture("Victoire.txt",&picture);
    Liberer(picture);


}
