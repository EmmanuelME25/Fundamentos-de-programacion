/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Promedio en arreglo.c
 * Author: Emmanuel
 *
 * Created on 23 de noviembre de 2020, 11:52 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n=0,aux=0;
    scanf("%d", &n);
    int array[n];
    double r=0;
    
    for(int i=0; i<=n-1; i++)
    {
        scanf("%d",&array[i]);
        aux+=array[i];
    
    }
    
    printf("%f",(float)aux / n);
    
    return (EXIT_SUCCESS);
}

