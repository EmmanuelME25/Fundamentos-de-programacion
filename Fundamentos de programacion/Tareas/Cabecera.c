/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cabecera.c
 * Author: Emmanuel
 *
 * Created on 18 de enero de 2021, 10:29 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
/*
 * 
 */
float pi=3.1415;
int main(int argc, char** argv) {

    int a=3, b=2,c;
    float area;
    char inicial;
    c=suma(a,b);
    printf("%d \n", c);
    c=resta(a,b);
    printf("%d \n", c);
    inicial=prim("hola");
    printf("%c \n", inicial);
    area=ac(3);
    printf("%lf", area);
    
    
    return (EXIT_SUCCESS);
}

