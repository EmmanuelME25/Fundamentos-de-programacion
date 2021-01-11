/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Menú.c
 * Author: Emmanuel
 *
 * Created on 7 de enero de 2021, 02:30 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int mcd(int x, int y);
/*
 * 
 */
int main(int argc, char** argv) {

    int x,y,t;
 printf("\n MAXIMO COMUN DIVISOR\n");
 printf("\n Ingrese el valor de x: ");
 scanf("%d",&x);
 printf("\n Ingrese el valor de y: ");
 scanf("%d",&y);
 t=mcd(x,y);
 printf("\n El MCD de x=%d y y=%d es: %d ",x,y,t);
 Sleep(5000);
 
    return (EXIT_SUCCESS);
}

int mcd(int x, int y)
{
 if(y==0)
 return x;
 else
 //Recursividad
 return mcd(y,x%y);
}