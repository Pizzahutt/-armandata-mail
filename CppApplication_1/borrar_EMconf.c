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
void borrar_EMconf (smail EMDB[0][0]) { 
    int  _i = 0;
    int  _j = 0;
    
    int id_1;
    int id_2; 
    
    
                                                                                // la idea es: hago una lista global con los IDs, borro estruct por id, luego toco contadores fuera
    
    for (_i = 0; EMDB[_i][_j].flag == 1 ; _i++ ) {
        printf("%i-%i--%s /n",EMDB[_i][_j].folders_id ,EMDB[_i][_j].folders_id ,EMDB[_i][_j].subject);                                                                        //borro por posicoin
    } 
    
    printf("Introduce el primer  num a la izquierda");
    scanf("%d", &id_1);
    
    printf("Introduce el segundo  num a la izquierda");
    scanf("%d", &id_2);
                                                                                // borrado simple por variable tipo switch
    EMDB[id_1][id_2].flag == 0;
  
}

*/

