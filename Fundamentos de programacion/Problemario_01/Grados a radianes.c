/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Grados a radianes.c
 * Author: Emmanuel
 *
 * Created on 10 de enero de 2021, 08:10 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
double trans(double);

int main(int argc, char** argv) {

    double a;
    
    scanf("%lf",&a);
    printf("%lf",trans(a));
    
    return (EXIT_SUCCESS);
}

double trans(double x)
{
 return x*3.1416/180;   

}
