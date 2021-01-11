/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Llenar un arreglo.c
 * Author: Emmanuel
 *
 * Created on 7 de enero de 2021, 08:50 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n;
    scanf("%d",&n);
    int array[n];
    
    for(int i=0;i<=n-1;i++){
    
        scanf("%d",&array[i]);
    
    }
    
    for(int i=0;i<=n-1;i++){
    
        printf("%d \n",array[i]);
    
    }
    return (EXIT_SUCCESS);
}

