#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <windows.h>
#include <string.h>
#include <unistd.h>




void borrar_EMconf (smail EMDB[0][0]) { 
    int  _i = 0;
    int  _j = 0;
    
    int id_1;
    int id_2; 
    
    
                                                                                
    
    for (_i = 0; EMDB[_i][_j].flag == 1 ; _i++ ) {
        printf("%i-%i--%s /n",EMDB[_i][_j].folders_id ,EMDB[_i][_j].folders_id ,EMDB[_i][_j].subject);                                                                        //borro por posicoin
    } 
    
    printf("Introduce el primer  num a la izquierda");
    scanf("%d", &id_1);
    
    printf("Introduce el segundo  num a la izquierda");
    scanf("%d", &id_2);
                                                                                
    EMDB[id_1][id_2].flag == 0;
  
}
