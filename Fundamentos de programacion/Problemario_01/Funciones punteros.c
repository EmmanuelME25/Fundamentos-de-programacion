/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Funciones punteros.c
 * Author: Emmanuel
 *
 * Created on 10 de enero de 2021, 10:52 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */


int main(int argc, char** argv) {

    int n=0;
    
    scanf("%d",&n);
    
    int a[n][n],*p[n][n];
    
    for (int i=0;i<=n-1;i++)
    {
        for (int j=0;j<=n-1;j++)
        {
            a[i][j]=i+j;
            p[i][j]=&a[i][j];
        }
    
    }
    
    for (int i=0;i<=n-1;i++)
    {
        for (int j=0;j<=n-1;j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }
    printf("Direcciones \n");
    
    for (int i=0;i<=n-1;i++)
    {
        for (int j=0;j<=n-1;j++)
        {
            printf("%p ",p[i][j]);
            
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
    
}

