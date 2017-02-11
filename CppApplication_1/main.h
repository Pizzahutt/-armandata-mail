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

#ifndef DECLARED
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
#define MAXName         50             //9
#define FLAGSize        0     

/*---- 2.STRUCTS ------------------------------*/



// element
typedef struct  {
    int                     flag;
    int                     mail_id;
    int                     folders_id;
    char                    to[MAXTO];
    char                    CC[MAXCc];
    char                    from[MAXFrom];
    char                    subject[MAXSubject];
    char                    fecha[MAXName]; 

} smail ; 

// element
 typedef struct {
    int                     flag;
    int                     mail_pos[MAXEmail];
    int                     mail_count;
    int                     folder_id;
    char                    folder_name[MAXName];
    int                     erasable;
  
// element 
}sfolder; 

typedef struct  {
    int                     flag;
    char                    struct_id[MAXId];
    char                    cuerpo[MAXCuerpo];
}sbody;




/*---- 4. BBDDs / ARRAYs ------------------------------*/




#define DECLARED
#endif
/*---------5.FUNCIONES -------------------------*/

//auxiliares




// principales

void init();
void crear_email();

#ifndef reload 
void reload_conf();
void list_folder();
void show_mail();
void show_folder(); 
void crear_folder();
void borrar_folder();
void visualizar_EM();
void borrar_EMconf();
void borrar_EMhard();
#define reload
#endif