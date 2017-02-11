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




void crear_email(smail EMDB[0][0], sfolder folders[0],sbody bodies[0][0], int contador){                //declaro la fucion
   
    /*COGER LA SIGUIENTE POSICION LIBRE EN INBOX PARA ESCRIBIR NUEVO MAIL.LUEGO REALMENTE LO GUARDO EN STRUCT*/
    
    
   /*---------------------------------------------------*/ // get contador /*
    
    int _i; 
    FILE *EMDBconf = fopen(".\\EMDB\\conf.txt", "r+");
    char a;
    for (_i = 0; _i < cont_pos; _i++) {
        a = getc(EMDBconf);
    }
    contador  = a; 
    contador = (int)a - 48;
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
        
        
   

    
