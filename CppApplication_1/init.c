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
#define DEFINE_THIS
#endif


void init (smail EMDB[0][0], sfolder folders[0],sbody bodies[0][0]) {
  

 
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
    
/*----------------------------------------------------------------------------------------------------*/
    int _i;
    int _j;
    char src[50];
    char dest[50];
    
                                                                                // FLAGS DE EMDB A 0
    for (_i = 0; _i < MAXEmail; _i++  ) {
        for (_j = 0; _j < MAXFolder ; _j++  ) {
        EMDB[_i][_j].flag = 0 ;
       }
    }
    
    // PARA INBOX FIJO UNOS DATOS
    folders[0].flag = 1;
    folders[0].folder_id = 0;
    folders[0].mail_count = 0;
    memset(dest, '\0', sizeof(folders[0].folder_name[0]));
    strlcpy(src, "INBOX",MAXName);
    strlcpy(dest, src,MAXName);
    printf("Final copied string : %s\n", dest);

    
    // PARA OUTBOX FIJO OTROS DATOS
    folders[1].flag = 1;
    folders[1].folder_id = 1;
    folders[1].mail_count = 0;
    memset(dest, '\0', sizeof(folders[0].folder_name[0]));
    strlcpy(src, "OUTBOX",MAXName);
    strlcpy(dest, src,MAXName);
    printf("Final copied string : %s\n", dest);
    
    
    
    
    
    
    
   
    
   int contador; 
  
   
   EMDBconf = fopen(".\\EMDB\\conf.txt", "r+");
   

   fprintf(EMDBconf, "Contador_ID:%d \r\n",contador);
   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"EMAIL-DB \r\n");
   fprintf(EMDBconf,"_______________ \r\n");

   for ( _i = 0; EMDB[_i][_j].flag != 0 ; _i++ ) {
          for ( _j = 0; EMDB[_i][_j].flag != 0 ; _j++ ) {
                fprintf(EMDBconf,"%d %c \r\n",EMDB[_i][_j].mail_id,EMDB[_i][_j].subject[0]);

        }
    }
   

   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"_______________ \r\n");
   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"FOLDER-DB \r\n");   
   fprintf(EMDBconf,"_______________ \r\n");
   
    char *buffer[50];

    for ( _i = 0; folders[_i].flag != 0 ; _i++ ) {
         
          fprintf(EMDBconf,"%d-",folders[_i].folder_id);
          fprintf(EMDBconf,"%s",folders[_i].folder_name[0]);
          
    fprintf(EMDBconf,"\r\n");      
    }
   

    fprintf(EMDBconf,"\r\n_______________\r\n");
    fprintf(EMDBconf,"END");
   
   
/*------------------------------------------------------*/       

fclose(EMDBconf);

   }

    

 



   

    
    

   
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
