#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <windows.h>
#include <string.h>
#include <unistd.h>




void copiar_mail (smail EMDB[0][0] ,sfolder folders[0], int contador) {      

    int _i=0;
    int _j=0;
    int indice;
    int indice_2;
    int destino; 
    int last;
    printf("Introduce el numero de la carpeta a listar:\n");
    
    /*--------------------------------------------------------------------------*/
    
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
    
    printf("(Introduce id de email):\n");
    scanf("%d",&indice_2);
    
    printf("En que carpeta quieres copiar este mensaje \n"); 
    scanf("%d",&destino);
    
    printf("Carpeta seleccionada \n"); 
    
    
    /*---------------------------------------------------------------------------*/
    for (_i = 0; EMDB[destino][_j].flag == 1; _i++ ) {
        last = _i++;
    }
    last++;
    
    /*--------------------------------------------------------------------------*/
    EMDB[destino][last].flag = EMDB[indice][indice_2].flag;
    EMDB[destino][last].folders_id = EMDB[indice][indice_2].folders_id;
    
    /*--------------------------------------------------------------------------*/
    strlcpy(EMDB[destino][last].CC,EMDB[indice][indice_2].CC,MAXName);
    strlcpy(EMDB[destino][last].fecha , EMDB[indice][indice_2].fecha, MAXName);
    strlcpy(EMDB[destino][last].from , EMDB[indice][indice_2].from, MAXName);
    strlcpy(EMDB[destino][last].mail_id , EMDB[indice][indice_2].mail_id, MAXName);
    strlcpy(EMDB[destino][last].subject , EMDB[indice][indice_2].subject, MAXName);
    strlcpy(EMDB[destino][last].to , EMDB[indice][indice_2].to, MAXName);

    /*--------------------------------------------------------------------------*/

    printf("Mensaje copiado \n"); 

    
 

  







}    