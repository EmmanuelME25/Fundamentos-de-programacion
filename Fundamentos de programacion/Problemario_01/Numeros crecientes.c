/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Numeros crecientes.c
 * Author: Emmanuel
 *
 * Created on 6 de enero de 2021, 11:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n=0;
    
    printf("Cantidad de números: ");
    scanf("%d",&n);
    
    int array[n];
    
    for(int i=0; i<=n-1;i++)
    {
        scanf("%d",&array[i]);
        if (i>=1 && array[i]<array[i-1])
        {
            printf("No están ordenados");
            return (0);
        }
    }
    printf("Ordenados");
    
    return (EXIT_SUCCESS);
}

