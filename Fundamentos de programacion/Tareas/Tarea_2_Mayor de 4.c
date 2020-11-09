/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tarea_2_Mayor de 4.c
 * Author: Emmanuel
 *
 * Created on 9 de noviembre de 2020, 11:12 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int a=0,b=0,c=0,d=0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    if(a>=b && a>=c && a>=d)
    {
        printf("%d",a);
        printf(" es el número mayor");
        return (EXIT_SUCCESS);
    }
    
      if(b>=a && b>=c && b>=d)
    {
        printf("%d",b);
        printf(" es el número mayor");
        return (EXIT_SUCCESS);
    }
    
        if(c>=b && c>=a && c>=d)
    {
        printf("%d",c);
        printf(" es el número mayor");
        return (EXIT_SUCCESS);
    }
    
        if(d>=b && d>=c && d>=a)
    {
        printf("%d",d);
        printf(" es el número mayor");
        return (EXIT_SUCCESS);
    }
    
    return (EXIT_SUCCESS);
}

