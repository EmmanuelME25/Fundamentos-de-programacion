/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tablas.c
 * Author: Emmanuel
 *
 * Created on 10 de noviembre de 2020, 03:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int i=1,j=1,aux=1;
    
    while(j<=11-1)
    {
        while(i<=11-1)
        {
            printf("%d x %d = %d \n",j,i,j*i);
            i++;
        }
    
        printf("\n");
        
        j++;
        i=1;
    }
    
    return (EXIT_SUCCESS);
}

