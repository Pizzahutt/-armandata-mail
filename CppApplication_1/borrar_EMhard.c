#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <windows.h>
#include <string.h>
#include <unistd.h>




void borrar_EMhard_mod(smail EMDB[0][0],sfolder folders[0]) { 
   
    int  _i;
    int  _j;
    
    int id_1;
    int id_2; 
    
    
    for (_i = 0; EMDB[_i][_j].flag == 1 ; _i++ ) {
        printf("%i-%i--%s /n",EMDB[_i][_j].folders_id ,EMDB[_i][_j].folders_id ,EMDB[_i][_j].subject);                                                                        //borro por posicoin
    } 
   
    
    printf("Introduce el primer  num a la izquierda");
    scanf("%d", &id_1);
    
    printf("Introduce el segundo  num a la izquierda");
    scanf("%d", &id_2);
                                                                                
    EMDB[id_1][id_2].flag = 0; 
    
    char strtemp[MAXName] ;
    char strmail[MAXName] ;
    
     
   strlcat(strmail, ".//EMDB//",MAXName);
   sprintf(strtemp,"%i_%s",EMDB[id_1][id_2].mail_id ,EMDB[id_1][id_2].subject );
   strlcat(strtemp, ".txt",MAXName);
   strlcat(strmail, strtemp,MAXName); 

   
    unlink(strmail);
    
}



 
