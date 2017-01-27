# -armandata-mail
Este es un proyecto de estudiantes de ingenieria de la UPF
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
#define MAXTo 100
#define MAXCc 100
#define MAXFrom 100
#define MAXId 100
#define MAXCuerpo 3000

#define email typedef struct{
char to[MAXTo];
char cc[MAXCc];
char from[MAXFrom];
char id[MAXId];
