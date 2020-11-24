/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Burbuja.c
 * Author: Emmanuel
 *
 * Created on 24 de noviembre de 2020, 01:53 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int n=0,aux=0;
    
    scanf("%d",&n);
    
    int array[n];
    
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&array[i]);
    }
    
   
    for (int i=1;i<=n-1;i++)
    {
       for (int j=0; j < n-i ;j++) 
       {
          if (array[j] > array[j+1])
          {
            aux=array[j];
            array[j]=array[j+1];
            array[j+1]=aux;
          }
       }
    }

    for(int i=0;i<=n-1;i++)
    {
        printf("%d \n",array[i]);
    }
    
    return (0);
}


