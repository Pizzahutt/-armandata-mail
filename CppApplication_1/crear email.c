/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>

crear_email(){                //declaro la fucion
    int i;
    int contador;
    int posicion = 13;
    char a;
    int ia;
    FILE *EMDBconf = fopen(".\\EMDB\\conf.txt", "r+");
    
    for ( i = 0; i < posicion; i++)  {
    a = fgetc(EMDBconf);      
    }
    //fscanf(EMDB,"%d", contador);
    
    fclose(EMDBconf);
    
    ia = a - "0";
    
    printf("%d",ia);
    
   /* 
    
    
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