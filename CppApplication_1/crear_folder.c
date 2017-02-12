#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <windows.h>
#include <string.h>
#include <unistd.h>



void crear_folder ( sfolder folders[0], int contador) {      
    
    
    //-------------------------------------------------------------------------- RECOGIDA DE DATOS
    
    char buffer[MAXName];                                                            //VARIABLE TEMPORAL
    printf("Introduce el nombre de la nueva carpeta \n");
    scanf("%s",&buffer);
    
    contador = contador + 1;                                                    //INCREMENTO DE ID
    
    //-------------------------------------------------------------------------- INI NUEVA CARPETA
    folders[contador].flag = 1;
    folders[contador].folder_id = contador;
    strlcpy(folders[contador].folder_name,buffer,MAXName);
    folders[contador].mail_count = 0;
    folders[contador].erasable = 1;
    //-------------------------------------------------------------------------- END
    
}
 
 