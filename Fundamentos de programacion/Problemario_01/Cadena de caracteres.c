/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cadena de caracteres.c
 * Author: Emmanuel
 *
 * Created on 7 de enero de 2021, 09:16 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n;
    scanf("%d",&n);
    char a[n];
    
    for(int i=0; i<=n-1;i++)
    {
        scanf("%c",&a[i]);
    }
    
    for(int i=0; i<=n-1;i++)
    {
        printf("%c",a[i]);
    }
    
    
    return (EXIT_SUCCESS);
}

