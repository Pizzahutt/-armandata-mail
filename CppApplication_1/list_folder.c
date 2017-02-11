
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


void list_folder( smail EMDB[0][0], sfolder folders[0]) {
    
/*-------------------------------------------------------------*/    
    int _i;
    int _j;
    int indice;
    
    printf("Introduce el numero de la carpeta a listar:\n");
    
      for ( _i = 0; folders[_i].flag != 0 ; _i++ ) {   
    printf("%d-%s",folders[_i].folder_id,folders[_i].folder_name);    
    printf("\n");      
    }
    
    printf("(Introduce el numero a la izquierda):\n");
    scanf("%d",&indice);
    
    if (EMDB[indice][_j].flag == 0 ) {
        printf("No hay nada en esta carpeta \n"); 
    }
    else {
        
    
          for ( _j = 0; EMDB[indice][_j].flag == 1 ; _j++ ) {
                printf("%d-%s\r\n",EMDB[_i][_j].mail_id,EMDB[_i][_j].subject);
          }
    }
}   


