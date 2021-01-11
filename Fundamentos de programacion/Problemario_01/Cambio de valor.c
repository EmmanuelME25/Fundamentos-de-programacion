/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cambio de valor.c
 * Author: Emmanuel
 *
 * Created on 10 de enero de 2021, 09:48 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

   int x = 4;
   int *a=60;
   
   x = a;
   
   printf("%d",a);
          
    return (EXIT_SUCCESS);
}

