/*
 * To change this license header, choose License Headers in Project Properties.
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
#define ASCII_VAL 48



void crear_email(smail EMDB[0][0], sfolder folders[0],sbody bodies[0][0], int contador){                //declaro la fucion
   
  
    
    
   /*---------------------------------------------------*/ // get contador /*
    
    int _i; 
    FILE *EMDBconf = fopen(".\\EMDB\\conf.txt", "r+");
    char a;
    for (_i = 0; _i < cont_pos; _i++) {
        a = getc(EMDBconf);
    }
    contador  = a; 
    contador = (int)a - ASCII_VAL;
    printf("contador:%d \n",contador); 
    fclose(EMDBconf);
   /*----------------------------------------------------*/ 
    
    
    
    
    
    
    

    /*--------------------------------------------------------------------*/
    
   
    
    printf("Interfaz crear mensaje.Rellena los campos siguientes:  ");

    
    
    EMDB[0][contador].mail_id = contador;
   // printf("prueba: %i",contador);
    
    //------------------  RECOGIDA DE DATOS
    printf("\n From:");
    getchar();
    scanf("%[^\n]",EMDB[0][contador].from); 
    printf("%s",EMDB[0][contador].from); 
    getchar();
    //-----------------
    printf("\n Fecha:");
    scanf("%[^\n]",EMDB[0][contador].fecha); 
    getchar();
    //-----------------
    printf("\n To:");
    scanf("%[^\n]",EMDB[0][contador].to);
    getchar();
    //-----------------
    printf("\n CC:");
    scanf("%[^\n]",EMDB[0][contador].CC);
    getchar();
    //-----------------
    printf("\n Subject:"); 
    scanf("%[^\n]",EMDB[0][contador].subject);
    getchar();
    //-----------------
    printf("\n Body:");
    scanf("%[^\n]",bodies[0][contador].cuerpo);
    getchar();
    EMDB[0][contador].flag = 1;
    bodies[0][contador].flag = 1;
    /***********************************************************************/
    
    /* INTRODUCIR AQUI LA ESCRITURA DEL DOCUMENTO (FPRINTF)*/
    
    /*preparacion*/ 
    char strtemp[MAXName] = "";
    char strmail[MAXName] = "";
    strlcat(strmail, ".//EMDB//",50);
    sprintf(strtemp, "%i_%s",EMDB[0][contador].mail_id ,EMDB[0][contador].subject );
    strlcat(strtemp, ".txt",50);
    strlcat(strmail, strtemp,MAXName); 
   
    printf("%s \n", strmail); 
    /*-------------*/
    
    FILE *mail = fopen(strmail, "r");
    
    if ( mail != NULL ) {
        printf("El archivo ya existe"); 
    }
    else {
                FILE *mail = fopen(strmail, "w+");
                fprintf(mail, "From: %s \r\n" ,EMDB[0][contador].from);
                fprintf(mail, "Date: %s \r\n" ,EMDB[0][contador].fecha);                   
                fprintf(mail, "Message_ID: %d \r\n" ,EMDB[0][contador].mail_id);
                fprintf(mail, "Subject: %s \r\n" ,EMDB[0][contador].subject);
                fprintf(mail, "To: %s \r\n" , EMDB[0][contador].to);
                fprintf(mail, "CC: %s \r\n" , EMDB[0][contador].CC);
                fprintf(mail, "\r\n" );
                fprintf(mail, "Message: %s \r\n" ,bodies[0][contador].cuerpo);
           fclose(mail);
                       
    }
    
    
                
                
                
                
                       
   } 
        
        
   

    
