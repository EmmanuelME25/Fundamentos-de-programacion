/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arreglo, fibonacci recorrido.c
 * Author: Emmanuel
 *
 * Created on 20 de noviembre de 2020, 05:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */


int main(int argc, char** argv) {
    unsigned long long n[100], x=2,y=3,aux=0;
    
    for(int i=0; i<=99; i++)
    {
        n[i]=x;
        aux=x+y;
        x=y;
        y=aux;
    
    }

 for(int i=0; i<=99; i++)
    {
        printf("%llu \n", n[i]);
    }
    return (EXIT_SUCCESS);
}

