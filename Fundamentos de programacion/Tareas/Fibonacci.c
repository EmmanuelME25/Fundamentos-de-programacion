/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fibonacci.c
 * Author: Emmanuel
 *
 * Created on 9 de noviembre de 2020, 07:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n=0,x=0,y=1,aux=0,i=0;
    
    printf("Introduzca número de cadena de fibonacci: ");
    scanf("%d",&n);
    
    while(i<=n-1)
    {
        printf("%d \n", x);
        aux=x+y;
        x=y;
        y=aux;
    
        i+=1;
    }
    
    
    
    return (EXIT_SUCCESS);
}

