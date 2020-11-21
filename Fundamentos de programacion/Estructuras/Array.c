/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.c
 * Author: Emmanuel
 *
 * Created on 19 de noviembre de 2020, 03:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
// definir
    
    int array[5];
        
    array[0] = 6;
    array[1] = 9;
    array[2] = 69;
    array[3] = 360;
    array[4] = -180;
    
    
   
   
    for (int i=0; i<=4; i++){
        
        printf("%d\n",array[i]);    
    }
   
    return (EXIT_SUCCESS);
}

