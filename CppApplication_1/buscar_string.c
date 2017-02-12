#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <windows.h>
#include <string.h>
#include <unistd.h>




void buscar_string (smail EMDB[0][0],sfolder folders[0] ,sbody bodies[0]) { 
    
    int _i=0;
    int _j=0;
    int indice;
    int indice_2;
    
    char buffer[MAXName];
    char buffer_2[MAXName];
    char copia[MAXName];
    
    printf("Introduce el numero de la carpeta a listar:\n");
    
      for ( _i = 0; folders[_i].flag != 0 ; _i++ ) {   
    printf("%d-%s",folders[_i].folder_id,folders[_i].folder_name);    
    printf("\n");      
    }
    
    printf("(Introduce el numero a la izquierda):\n");
    scanf("%d",&indice);
    
    if (EMDB[indice][_j].flag == 0) {
        printf("Esta carpeta esta vacia, por favor selecciona una carpeta con mails");
    }
    
    while ( EMDB[indice][_j].flag == 1 ) {
         printf("%d-%s \r\n",EMDB[indice][_j].mail_id,EMDB[indice][_j].subject);
         _j++;        

    } 
    
    
    
       printf("Introduce el texto a buscar:\n");
       scanf("%[^\n]",&buffer);
        
       sprintf(copia,"%s",bodies[indice].cuerpo);
       strcpy(copia,bodies[indice].cuerpo);
       
       
       
       
       while (EMDB[indice][_i].flag == 1 ) {
           
      
       strcpy( (buffer_2) , (strstr(copia,buffer)) );
         if (strcmp(buffer_2,buffer) == 1 ) {
           printf("Coincidencia en email id numero %d",EMDB[indice][_i].folders_id);   
        }
    }

      printf("Programa terminado");
      
}

