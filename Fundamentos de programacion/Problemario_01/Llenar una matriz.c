/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Llenar una matriz.c
 * Author: Emmanuel
 *
 * Created on 7 de enero de 2021, 01:39 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    int n,m;
    int arr[n][m];
    
    printf("columnas: ");
    scanf("%d",&n);
    printf("filas: ");
    scanf("%d",&m);
    
    for(int j=0;j<=m-1;j++)
    {
        for(int i=0;i<=n-1; i++)
        {
            scanf("%d",&arr[j][i]);
        }
    }
    
    for(int j=0;j<=m-1;j++)
    {
        for(int i=0;i<=n-1; i++)
        {
            printf("%d",arr[j][i]);
        }
    }
    
    return (EXIT_SUCCESS);
}

