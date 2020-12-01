/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Funciones.c
 * Author: Emmanuel
 *
 * Created on 30 de noviembre de 2020, 05:27 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) {

    printf("Un número: ");
    float x;
    scanf("%f", &x);
    printf("\n Raiz %.2f", sqrt(x));
    printf("\n Exponencial %.2f", exp(sqrt(x)));
    printf("\n LN %.2f", log(sqrt(x)));
    printf("\n L10 %.2f", log10(sqrt(x)));
    printf("\n Valor negativo: ");
    float y;
    scanf("%f", &y);
    printf("\n Absoluto %.2f", fabs(y));
    printf("\n Decimal alto: ");
    float z; 
    scanf("%f",&z);
    printf("\n Redondeo arriba %.2f",ceil(z));
    printf("\n Decimal bajo: ");
    float a;
    scanf("%f",&a);
    printf("\n Redondeo abajo %.2f",floor(z));
    printf("\n Elevar cuadrado %.2f",pow(sqrt(x),2));
    printf("\n Residuo %.2f", fmod(sqrt(x),2));
    printf("\n Seno %.2f",sin(sqrt(x)));
    printf("\n Coseno  %.2f", cos(sqrt(x)));
    printf("\n Tangente %.2f",tan(sqrt(x)));

    
    return (EXIT_SUCCESS);
}

