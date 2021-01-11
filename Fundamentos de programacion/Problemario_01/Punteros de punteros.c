/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Punteros de punteros.c
 * Author: Emmanuel
 *
 * Created on 10 de enero de 2021, 10:47 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x=5;
    int *a;
    int **b;
    
    a = &x;
    printf("%p \n",a);
    b=&a;
    printf("%p",b);
    
    return (EXIT_SUCCESS);
}

