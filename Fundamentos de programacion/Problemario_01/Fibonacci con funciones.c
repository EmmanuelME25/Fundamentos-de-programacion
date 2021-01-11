/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fibonacci con funciones.c
 * Author: Emmanuel
 *
 * Created on 10 de enero de 2021, 08:22 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int fib(int);
int main(int argc, char** argv) {

    int n;
    scanf("%d",&n);
    fib(n);
    
    return (EXIT_SUCCESS);
}

int fib(int a)
{
    int x=0,y=1,aux=0,i=0;
    while(i<=a-1)
    {
        printf("%d \n",x) ;
        aux=x+y;
        x=y;
        y=aux;
    
        i+=1;
    }
}