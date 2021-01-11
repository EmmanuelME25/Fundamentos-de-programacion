/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Contador de positivos.c
 * Author: Emmanuel
 *
 * Created on 7 de enero de 2021, 12:47 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int n=0,a=0,cont=0;
    
    printf("Cantidad de números: ");
    scanf("%d",&n);
    
    for(int i=0; i<=n-1; i++);
    {
        scanf("%d",&a);
        
        if(a>0)
        {
            cont++;
        }
    }
    
    printf("%d",cont);
    
    return (EXIT_SUCCESS);
}

