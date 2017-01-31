/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.h
 * Author: Anon delivers
 *
 * Created on 29 de enero de 2017, 22:05
 */
/*---- 1.DEFINES ------------------------------*/


#define MAXEmail        100             //1
#define MAXFolder       100             //2
#define MAXBodies       100             //2

//-----------------------------------------
#define MAXTO           100             //3
#define MAXCc           100             //4 
#define MAXFrom         100             //5
#define MAXId           50             //6
#define MAXCuerpo       3000            //7
#define MAXSubject      100             //8
#define MAXName         100             //9
#define FLAGSize        0     

/*---- 2.STRUCTS ------------------------------*/

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
/*---------5.FUNCIONES -------------------------*/

void init(void);