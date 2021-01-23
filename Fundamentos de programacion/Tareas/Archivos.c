/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Archivos.c
 * Author: Emmanuel
 *
 * Created on 22 de enero de 2021, 10:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    char cadena1[]="Si";

    int num=10;
    FILE* fichero;
    fichero = fopen("Archivo.txt", "wt");
    fputs("Prueba\n", fichero);
    fputc('C', fichero);
    fputs("\n", fichero);
    fprintf(fichero, "%s %d", cadena1, num);
    fclose(fichero);
    printf("Proceso completado");
    
    
    return (EXIT_SUCCESS);
}

