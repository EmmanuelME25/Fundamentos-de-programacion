/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mayor de dos números con funciones.c
 * Author: Emmanuel
 *
 * Created on 10 de enero de 2021, 07:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int mayor(int,int);

int main(int argc, char** argv) {

    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("%d \n",mayor(a,b));
    printf("Es mayor");
    
    return (EXIT_SUCCESS);
}

int mayor(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    if(y>x)
    {
        return y;
    }
    if(x==y)
    {
        return x;
    }
}