/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arreglo de direcciones.c
 * Author: Emmanuel
 *
 * Created on 10 de enero de 2021, 10:37 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n;
    scanf("%d",&n);
    int a[n];
    int *p[n];
    
    for(int i=0;i<=n-1;i++)
    {
        a[i]=i;
        p[i]= &a[i];
    
    }
    
    for(int i=0; i<=n-1;i++)
    {
        printf("%p \n", p[i]);
    
    }
    
    
    
    return (EXIT_SUCCESS);
}

