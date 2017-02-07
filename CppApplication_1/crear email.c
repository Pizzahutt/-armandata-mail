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

void crear_email(smail EMDB[0][0], sfolder folders[0],sbody bodies[0][0]){                //declaro la fucion
   
    /*COGER LA SIGUIENTE POSICION LIBRE EN INBOX PARA ESCRIBIR NUEVO MAIL.LUEGO REALMENTE LO GUARDO EN STRUCT*/
    int contador;
    
   /*---------------------------------------------------*/ 
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
    char buffer[50]; 
    
    //------------------  
    printf("\n From:");
    scanf("%[^\n]",buffer); 
    strlcpy(EMDB[0][contador].from,buffer,50);
    printf("%s",EMDB[0][contador].from); 
    //-----------------
    printf("\n Fecha");
    scanf("%[^\n]",buffer); 
    strlcpy(EMDB[0][contador].from,buffer,50);
    //-----------------
    printf("\n To:");
    buffer[0] = '\0';
    scanf("%[^\n]",buffer);
    strlcpy(EMDB[0][contador].to,buffer,50);
    //-----------------
    printf("\n CC:");
    fflush( stdin );
    scanf("%[^\n]",buffer);
    strlcpy(EMDB[0][contador].from,buffer,50);
    //-----------------
    printf("\n Header:");
    fflush( stdin );
    scanf("%[^\n]",buffer);
    strlcpy(EMDB[0][contador].subject,buffer,50);
    //-----------------
    printf("\n Body:");
    fflush( stdin );
    scanf("%[^\n]",buffer);
    strlcpy(bodies[0][contador].cuerpo,buffer,50);
    bodies[0][contador].flag = 1;
    /***********************************************************************/
    
    /* INTRODUCIR AQUI LA ESCRITURA DEL DOCUMENTO (FPRINTF)*/
    char strtemp[MAXName];
    char strmail[MAXName] = ".\\EMDB\\";
    sprintf(strtemp, "%i_%s.txt",EMDB[0][contador].folder_id ,EMDB[0][contador].subject );
    strcat(strmail, strtemp); 
    
    printf("%s", strmail); 
    
    
    
    
    
    
    
    
    
    
    
    /*------------------------------------------------------*/
    
    //folders[0].mail_count = mail_count++; 
    
    
    /*
    FILE *EMDBconf = fopen(".\\EMDB\\conf.txt", "r+");
    
    for ( i = 0; i < posicion; i++)  {
    a = fgetc(EMDBconf);      
    }
    fscanf(EMDB,"%d", contador);
    
    fclose(EMDBconf);
    
    
    
   
    
    
    .folder_Id[0];    //
    .subject[0];
    .to[0];
    .CC[0];
    
    
    .cuerpo[0];
    .flag[0]=1;
    .flag=1;
    
    
    
    
    fopen(nombre, "w");
    printf("Asunto: ");
    scanf("%c", &d);
    d=smail.subject[MAXSubject];
    fputs(d,nombre);
    */
    
}