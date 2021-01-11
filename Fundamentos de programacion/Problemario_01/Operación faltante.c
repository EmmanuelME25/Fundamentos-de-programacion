/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Operación faltante.c
 * Author: Emmanuel
 *
 * Created on 7 de enero de 2021, 12:23 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a,b,r;
    
    printf("Num 1:");
    scanf("%d",&a);
    printf("Num 2:");
    scanf("%d",&b);
    printf("Res:");
    scanf("%d",&r);
    
    if(a+b==r)
    {
        printf("SUMA \n");
    }
        if(a-b==r)
    {
        printf("RESTA \n");
    }
        if(a*b==r)
    {
        printf("MULTIPLICACIÓN \n");
    }
        if(a/b==r)
    {
        printf("DIVISIÓN \n");
    }
    
    return (EXIT_SUCCESS);
}

