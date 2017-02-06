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
        printf("4. Borrar Email de EMconfig \n");
        printf("5. Crear Carpeta \n");
        printf("6. Borrar Carpeta \n");
        printf("7. Copiar Email \n");
        printf("8. Borrar Email de una carpeta \n");
        printf("9. Introduce una opción (0 para salir) \n");
        scanf("%d", &result);
        if ( result  > 10) printf("ERROR \n");
    return result; 
}
















int main(int argc, char** argv) {

smail **EMDB[MAXFolder][MAXEmail];

sfolder *folders[MAXFolder]; 
        
sbody  **bodies[MAXFolder][MAXEmail];


init(&bodies,&folders,&EMDB);
    if ((mostrar_menu()) != 0)
              
    while ((mostrar_menu()) != 0 ) {
         
        switch (mostrar_menu()) {
            
            case 1:
                    break;
            case 2:
                            
                    break;
            case 3:
                            
                    break;
            case 4:
                            
                    break;
            case 5:
                            
                    break;
            case 6:
                
                    break;
            case 7:
                
                    break;                    
            case 8:
                
                    break;            
            case 9:
                
                    break;            
           
                    
                   
        }
    }; 
    
  return (EXIT_SUCCESS);
}

