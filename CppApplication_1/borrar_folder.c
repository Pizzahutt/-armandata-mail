#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <windows.h>
#include <string.h>
#include <unistd.h>



void borrar_folder (sfolder folders[0],smail EMDB[0][0], int contador) {      
    int _i;
    int _j;
        
    int id;                                                            
    printf("Introduce el ID de la carpeta a borrar");
    scanf("%d",&id);
    
    folders[id].flag = 0;
    folders[id].flag = 1;
    folders[id].folder_id = contador;
    strlcpy(folders[contador].folder_name,"",MAXName);
    folders[id].mail_count = 0;
    folders[id].erasable = 1;
   
    
       for ( _i = 0; EMDB[_i][_j].flag != 0 ; _i++ ) {
          for ( _j = 0; EMDB[_i][_j].flag != 0 ; _j++ ) {
              if ( EMDB[_i][_j].folders_id == id ) {
                  EMDB[_i][_j].folders_id = 0;
              } 
            }
        }
    
  

}

