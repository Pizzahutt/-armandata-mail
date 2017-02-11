#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <windows.h>
#include <string.h>
#include <unistd.h>
#ifndef DEFINE_THIS
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
#define MAXEmail        100             //1
#define MAXFolder       100             //2
#define MAXBodies       100             //2
#define cont_pos        13
#define DEFINE_THIS
#endif


/*
void crear_folder ( sfolder *folders[0], int contador) {      
    
    
    //-------------------------------------------------------------------------- RECOGIDA DE DATOS
    
    char buffer[50];                                                            //VARIABLE TEMPORAL
    printf("Introduce el nombre de la nueva carpeta");
    scanf("%s",&buffer);
    
    contador = contador + 1;                                                    //INCREMENTO DE ID
    
    //-------------------------------------------------------------------------- INI NUEVA CARPETA
    folders[contador]->flag = 1;
    folders[contador]->folder_id = contador;
    strlcpy(folders[contador]->folder_name,buffer,50);
    folders[contador]->mail_count = 0;
    folders[contador]->erasable = 1;
    //-------------------------------------------------------------------------- END
    
}
 * 
 * */