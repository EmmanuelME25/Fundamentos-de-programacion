/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Burbuja optimizado.c
 * Author: Emmanuel
 *
 * Created on 24 de noviembre de 2020, 05:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int n=0,aux=0,band=1;
    
    scanf("%d",&n);
    
    int array[n];
    
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&array[i]);
    }
    
    for(int i=0; i<n-1 && band==1; i++)
    {
        band=0;
    
        for(int j=0; j<n-1;j++)
        {
            if(array[j]<array[j+1])
            {
            band=1;
            aux=array[j];
            array[j]=array[j+1];
            array[j+1]=aux;
            }
        }
    
    
    
    }
    
    for(int i=n-1;i>=0;i--)
    {
        printf("\n %d", array[i]);
    }
    return (0);
}

