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
#ifndef DECLARED

typedef struct  {
    int                     flag[FLAGSize];
    char                    to[MAXTO];
    char                    CC[MAXCc];
    char                    from[MAXFrom];
    char                    subject[MAXSubject];
    char                    fecha; 
    char                    message_id[MAXId];
    char                    folder_id[MAXId];
}smail; 

 typedef struct {
    int                     flag[FLAGSize];
    char                    folder_name[MAXName];
    char                    folder_id[MAXId];
    
}sfolder; 

typedef struct  {
    int                     flag[FLAGSize];
    char                    struct_id[MAXId];
    char                    cuerpo[MAXCuerpo];
}sbody;




/*---- 4. BBDDs / ARRAYs ------------------------------*/


smail EMDB[MAXFolder][MAXEmail];

sfolder folders[MAXFolder]; 
        
sbody  bodies[MAXBodies];

#define DECLARED
#endif
typedef struct  {
    int                     flag[FLAGSize];
    char                    to[MAXTO];
    char                    CC[MAXCc];
    char                    from[MAXFrom];
    char                    subject[MAXSubject];
    char                    fecha; 
    char                    message_id[MAXId];
    char                    folder_id[MAXId];
}smail; 



smail crear_email(){                //declaro la fucion
    char nombre[10]="Id_folder";    //
     
    char d;
    fopen(nombre, "w");
    printf("Asunto: ");
    scanf("%c", &d);
    d=smail.subject[MAXSubject];
    fputs(d,nombre);
    
}