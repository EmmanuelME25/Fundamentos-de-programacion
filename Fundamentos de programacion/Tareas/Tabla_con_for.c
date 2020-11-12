/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tabla_con_for.c
 * Author: Emmanuel
 *
 * Created on 12 de noviembre de 2020, 03:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
 for(int j=1; j<=10;j+=1)
    {
        for(int i=1; i<=10;i+=1)
        {
            printf("%d x %d = %d \n",j,i,j*i);
   
        }
    
        printf("\n");
       
    }
    return (EXIT_SUCCESS);
}

