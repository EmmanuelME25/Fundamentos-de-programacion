/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Operar con arreglos.c
 * Author: Emmanuel
 *
 * Created on 7 de enero de 2021, 12:56 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n,sa,re,mu;
    scanf("%d",n);
    scanf("%d",sa);
    scanf("%d",re);
    scanf("%d",mu);
    
    int s[n], r[n], m[n], o[n];
    
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&o[i]);
        s[i]=o[i]+sa;
        r[i]=o[i]-re;
        m[i]=o[i]*mu;

    }
    
    for(int i=0;i<=n-1;i++)
    {
        printf("%d s",s[i]);
        printf("%d r",r[i]);
        printf("%d m",m[i]);
    }
        for(int i=0;i<=n-1;i++)
    {
        printf("%d r",r[i]);
    }
        for(int i=0;i<=n-1;i++)
    {
        printf("%d m",m[i]);
    }
    return (EXIT_SUCCESS);
}

