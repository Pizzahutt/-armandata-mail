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



void reload_conf( smail EMDB[0][0], sfolder folders[0], int contador) {                                            //pasale las structs
    
  

   
/*------------------------------------------------------*/
  
    int _i;
    int _j;
    char src[50];
    char dest[50];
    int bufffer[50];
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
    strlcpy(folders[0].folder_name,"INBOX",MAXName);
    

    
    // PARA OUTBOX FIJO OTROS DATOS 
    
    folders[1].flag = 1;
    folders[1].folder_id = 1;
    folders[1].mail_count = 0;
    strlcpy(folders[1].folder_name,"OUTBOX",MAXName);
 
  
   // INCREMENTO DE CONTADOR Y RECARGA DE FICHERO 
     
   
   FILE *EMDBconf = fopen(".\\EMDB\\conf.txt", "w+");

   fprintf(EMDBconf, "Contador_ID:%d \r\n",contador);
   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"EMAIL-DB \r\n");
   fprintf(EMDBconf,"_______________ \r\n");

   for ( _i = 0; EMDB[_i][_j].flag != 0 ; _i++ ) {
          for ( _j = 0; EMDB[_i][_j].flag != 0 ; _j++ ) {
                fprintf(EMDBconf,"%d-%s\r\n",EMDB[_i][_j].mail_id,EMDB[_i][_j].subject);
        }
    }
   
   
   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"_______________ \r\n");
   fprintf(EMDBconf,"\r\n");
   fprintf(EMDBconf,"FOLDER-DB \r\n");   
   fprintf(EMDBconf,"_______________ \r\n");
    
  
    
    for ( _i = 0; folders[_i].flag != 0 ; _i++ ) {   
    fprintf(EMDBconf,"%d-%s",folders[_i].folder_id,folders[_i].folder_name);    
    fprintf(EMDBconf,"\r\n");      
    }
    fprintf(EMDBconf,"_______________\r\n");
 
/*------------------------------------------------------*/       
    fprintf(EMDBconf,"END");

fclose(EMDBconf);

   }

// esto son funciones auxiliares para mi mismo
    
void show_mail (smail EMDB[0][0], int fila,int col ) {
    printf("Flag: %d \r\n" ,EMDB[fila][col].flag);
    printf("Mail_id: %d \r\n" ,EMDB[fila][col].mail_id);
    printf("From: %s \r\n" ,EMDB[fila][col].from);
    printf("To: %s \r\n" ,EMDB[fila][col].to);
    printf("CC: %s \r\n" ,EMDB[fila][col].CC);
    printf("Subject: %s \r\n" ,EMDB[fila][col].subject);
    printf("Fecha: %s \r\n" ,EMDB[fila][col].fecha);   
}

void show_folder(sfolder folders[0], int fila) {
    printf("From: %d \r\n" ,folders[fila].flag);
    printf("From: %d \r\n" ,folders[fila].mail_count);
    printf("From: %s \r\n" ,folders[fila].folder_name);
    printf("From: %d \r\n" ,folders[fila].erasable);
    
}

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

















