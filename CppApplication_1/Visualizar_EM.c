#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <windows.h>
#include <string.h>
#include <unistd.h>



void visualizar_EM (smail EMDB[0][0], sfolder folders[0], sbody bodies[0] ) { 
  
    int _i=0;
    int _j=0;
    int indice;
    int indice_2;
    
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
    
    printf("(Introduce id de email):\n");
    scanf("%d",&indice_2);
    

    
    
    
    printf("FROM: %s",EMDB[indice][indice_2].from);
    printf("\n");
    printf("TO: %s",EMDB[indice][indice_2].to);
    printf("\n");
    printf("CC: %s",EMDB[indice][indice_2].CC);
    printf("\n");
    printf("ASUNTO: %s",EMDB[indice][indice_2].subject);
    printf("\n");
    printf("%s",bodies[indice].cuerpo);
    printf("\n");
    printf("FIN DE MENSAJE");
    
    /*--------------------------------------------------------------------------*/
}
 