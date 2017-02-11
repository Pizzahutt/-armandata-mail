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
void borrar_folder () {      
    int _i;
    int _j;
        
    int id;                                                            //VARIABLE TEMPORAL
    printf("Introduce el ID de la carpeta a borrar");
    scanf("%d",&id);
    /*
    folders[id]->flag = 0;
    folders[id]->flag = 1
    //folders[id]->folder_id = contador;
    //strlcpy(folders[contador]->folder_name,"");
    folders[id]->mail_count = 0;
    folders[id]->erasable = 1;
   
    
       for ( _i = 0; EMDB[_i][_j].flag != 0 ; _i++ ) {
          for ( _j = 0; EMDB[_i][_j].flag != 0 ; _j++ ) {
              if ( EMDB[_i][_j].folders_id == id ) {
                  //EMDB[_i][_j].folders_id = 0;
              } 
            }
        }
    
  */
/*
}

*/