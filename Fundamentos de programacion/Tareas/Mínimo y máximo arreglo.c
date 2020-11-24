/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mínimo y máximo arreglo.c
 * Author: Emmanuel
 *
 * Created on 24 de noviembre de 2020, 12:17 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n=0, min, max=0;
    scanf("%d",&n);
    int array[n];
    
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&array[i]);
        
        if(array[i]>=max)
        {
            max=array[i];
        }
        
        if(array[i]<=min)
        {
            min=array[i];
        }
    }
    
    printf("Mínimo %d \n",min);
    printf("Máximo %d \n",max);
    
    
    return (EXIT_SUCCESS);
}

