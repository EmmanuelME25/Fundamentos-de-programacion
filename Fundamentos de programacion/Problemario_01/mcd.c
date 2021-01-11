/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mcd.c
 * Author: Emmanuel
 *
 * Created on 10 de enero de 2021, 07:37 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void hola();
void adios();
void otrac();

int main(int argc, char** argv) {

    int o; 
    printf("Seleccione la opción a escoger \n");
    printf("1 PARA HOLA \n");
    printf("2 PARA ADIÓS \n");
    printf("3 PARA OTRA COSA \n");
    printf("Cualquier cosa para salir \n");
    
    scanf("%d",&o); 
    
    if(o==1)
    {
        hola();
    }
    if(o==2)
    {
        adios();
    }
    if(o==3)
    {
        otrac();
    }
    
    
    return (EXIT_SUCCESS);
}

void hola()
{
    printf("Hola");
}
void adios()
{
    printf("Adiós");
}
void otrac()
{
    printf("Otra cosa");
}