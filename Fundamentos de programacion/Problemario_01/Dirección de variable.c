/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dirección de variable.c
 * Author: Emmanuel
 *
 * Created on 10 de enero de 2021, 10:16 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x=10;
    int *a;
    a=&x;
    printf("%p",a);
    
    return (EXIT_SUCCESS);
}

