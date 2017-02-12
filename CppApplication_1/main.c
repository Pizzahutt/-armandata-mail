/* 
 * File:   main.c
 * Author: u137497
 *
 * Created on 27 de enero de 2017, 17:06
 */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>


#ifndef MENU_DEFINE
#define DEFAULT_FOLDERS 2
#define A 1
#define B 2
#define C 3
#define D 4
#define E 5
#define F 6
#define G 7
#define H 8
#define I 9 
#define J 10
#define K 11
#define L 12
#define M 13
#define MAXOPT 13


#define MENU_DEFINE
#endif







/*
 * 
 */

int mostrar_menu () {
    int result;
        printf(" \n ");
        printf(" Xx - Menu Email 1.0 - xX \n");
        printf("Introduce una opción:  \n");
        printf("1. Crear un nuevo Email \n");
        printf("2. Listar carpeta \n");
        printf("3. Visualizar EM \n");
        printf("4. Borrar Email de EMconfig     (borrado logico) \n");
        printf("5. Crear Carpeta \n");
        printf("6. Borrar Carpeta \n");
        printf("7. Copiar Email \n");
        printf("8. Borrar Email de una carpeta  (borrado físico) \n");
        printf("9. Buscar por string \n");
        printf("_.Funciones Auxiliares:\n");
        printf("10. Mostrar pos[] Struct Email  \n");
        printf("11. Mostrar pos[] Struct Folder \n");
        printf("12. Introducir pos[] Struct Folder \n");
        printf(". Introduce una opción (0 para salir) \n");

        
        scanf("%d", &result);
        if ( result  > MAXOPT || result < 0) printf("\x1b[31m ERROR \n \x1b[0m");
    return result; 
}
















void main() {

smail **EMDB[MAXFolder][MAXEmail];

sfolder *folders[MAXFolder]; 

        
sbody **bodies[MAXFolder][MAXEmail];

int mail_gl = 0;                   
int folder_gl = DEFAULT_FOLDERS;                                                               
int opcion;


init(bodies,folders,EMDB);
    
   

              
    while ((opcion = mostrar_menu()) != 0 ) {
         
        switch (opcion) {
            
            case A: 
                    crear_email(bodies,folders,EMDB, mail_gl);
                    mail_gl++;
                    reload_conf(EMDB,folders, mail_gl); 
                    break;
            case B:
                    list_folder(EMDB,folders);   
                    break;
            case C: 
                    visualizar_EM(EMDB,folders,bodies);
                    break;
            case D:
                    borrar_EMconf(EMDB);
                    mail_gl--;
                    reload_conf(EMDB,folders, mail_gl); 
                    break;
            case E:
                    crear_folder(folders,folder_gl);
                    folder_gl++;
                    reload_conf(EMDB,folders, mail_gl); 
                    break;
            case F:
                    borrar_folder(folders,EMDB,folder_gl);
                    folder_gl--;
                    reload_conf(EMDB,folders, mail_gl); 
                    break;
            case G:
                    copiar_mail();
                    mail_gl++; 
                    reload_conf(EMDB,folders, mail_gl); 
                    break;                    
            case H:
                    borrar_EMhard_mod(EMDB,folders,mail_gl);
                    mail_gl--;
                    reload_conf(EMDB,folders, mail_gl); 
                    break;            
            case I:
                    buscar_string(EMDB,folders,bodies);
                    break; 
            case J:
                    show_mail(EMDB);
                    break;
            case K:
                    show_folder(EMDB);
                    break;
            case L:
                    test_mail(EMDB);
                    break;
         
                   
        }
    } 
  
 
}

