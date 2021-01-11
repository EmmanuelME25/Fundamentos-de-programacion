/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Aprobado-reprobado.c
 * Author: Emmanuel
 *
 * Created on 6 de enero de 2021, 10:29 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    double a,b,c,r;
    printf("Ingrese las calificaciones: \n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    r=(a+b+c)/3;
    
    if(r>=6)
    {
        printf("APROBADO");
    }
    else
    {
        printf("REPROBADO");
    }
    
    
    return (EXIT_SUCCESS);
}

