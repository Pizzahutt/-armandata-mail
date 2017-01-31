/*

 *  * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <windows.h>
#include <unistd.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"


void init (void) {
  /*-----------------------------------------------------------------*/
    // CHECK FOLDER
    
 printf(GREEN"Inicializando programa ... \n");
  if (CreateDirectory(".\\EMDB",NULL)) {
       printf(YELLOW"Detectado directorio EMDB no existente\nNuevo Directorio Creado");   
  } else {
      printf(CYAN"Detectado directorio EMDB existente");
  }
  printf(GREEN"\n"GREEN"... \n");   
  
  /*----------------------------------------------------------------------*/
    // CHECK FICHERO 
  
    FILE *EMDBconf = fopen(".\\EMDB\\conf.txt", "r");
    fclose(EMDBconf);
    
    if ( EMDBconf != NULL ) {
            printf(CYAN"Archivo de configuración encontrado\n");
    } else {
            printf(YELLOW"Archivo de configuración no encontrado\n");
            FILE *EMDBconf = fopen(".\\EMDB\\conf.txt", "w");
            fclose(EMDBconf);
            printf(GREEN"Archivo de configuración creado \n");
  }
/*-------------------------------------------------------------------------*/
 
   
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
}