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
#define RESET   "\x1b[0m"


int i,j;

void init (void) {
  /*-----------------------------------------------------------------*/
    // CHECK FOLDER
 
 printf(GREEN"Inicializando programa ... \n");
  if (CreateDirectory(".\\EMDB",NULL)) {
       printf(YELLOW"Detectado directorio EMDB no existente\nNuevo Directorio Creado"RESET);   
  } else {
      printf(CYAN"Detectado directorio EMDB existente"RESET);
  }
  printf(GREEN"\n"GREEN"... \n"RESET);   
  
  /*----------------------------------------------------------------------*/
    // CHECK FICHERO 
  
    FILE *EMDBconf = fopen(".\\EMDB\\conf.txt", "r");
    fclose(EMDBconf);
    
    if ( EMDBconf != NULL ) {
            printf(CYAN"Archivo de configuración encontrado\n"RESET);
    } else {
            printf(YELLOW"Archivo de configuración no encontrado\n"RESET);
            FILE *EMDBconf = fopen(".\\EMDB\\conf.txt", "w");
            fclose(EMDBconf);
           printf(GREEN"Archivo de configuración creado \n"RESET);
    }
    printf(GREEN"... \n"RESET);  
    printf(GREEN"Programa Inicializado \n"RESET);  
    
        
    //WRITE FICHERO 
   int contador = 0; 
   EMDBconf = fopen(".\\EMDB\\conf.txt", "r+");
 /*-----------------------------------------------------*/
    folders[0].flag[0] = 1;
    folders[0].folder_id[0] = 0;
   // folders[0].folder_name[0] = "INBOX";
            
    folders[1].flag[0] = 1 ;
    folders[1].folder_id[0] = 1;
   // folders[1].folder_name[0] = "OUTBOX";
            
   
/*------------------------------------------------------*/   
   fprintf(EMDBconf, "Contador_ID:%d \r\n",contador);
   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"EMAIL-DB \r\n");
   fprintf(EMDBconf,"_______________ \r\n");
   
   for ( i = 0; EMDB[i][j].flag[0] != NULL ; i++ ) {
          for ( j = 0; EMDB[i][j].flag[0] != NULL ; j++ ) {
                fprintf(EMDBconf,"%s-%s \r\n",EMDB[i][j].message_id,EMDB[i][j].subject);

        }
    }
 
   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"_______________ \r\n");
   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"FOLDER-DB \r\n");   
   fprintf(EMDBconf,"_______________ \r\n");

    for ( i = 0; folders[i].flag[0] != NULL ; i++ ) {
           fprintf(EMDBconf,"%d %s \r\n",folders[i].folder_id[0],folders[i].folder_name[0]);
    }
   
    fprintf(EMDBconf,"\r\n_______________\r\n");
    fprintf(EMDBconf,"END");
    fclose(EMDBconf);
   
   
/*------------------------------------------------------*/       

    // OUTFOLDER AND INBOX CONSTRUCT
/*
    typedef struct {
    int                     flag[FLAGSize];
    char                    folder_name[];
    char                    folder_id[MAXId];
}sfolder; 
*/

    
    
    
    

    
    
    
    
    
    
    
    
    
   }
    

 



   

    
    

   
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
