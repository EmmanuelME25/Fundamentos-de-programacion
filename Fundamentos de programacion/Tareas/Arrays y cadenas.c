/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arrays y cadenas.c
 * Author: Emmanuel
 *
 * Created on 12 de enero de 2021, 03:00 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    char a[100],c[100];
    
    scanf("%s",&a);
    printf("%d \n",strlen(a));
    scanf("%s",&c);
    
    if(strcmp(c , a)==0)
    {
        printf("Son iguales \n");
    }
    
    strcat(a, c);
    printf("%s \n",a);
    
    int n;
    scanf("%d",&n);
    int b[n][n];
    
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            b[i][j]=i+j;
        }
    }
    
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            printf("%d ",b[i][j]=i+j);
        }
        printf("\n");
    }
    

    
    
    
    return (EXIT_SUCCESS);
}

