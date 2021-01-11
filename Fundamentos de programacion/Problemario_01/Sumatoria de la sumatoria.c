/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sumatoria de la sumatoria.c
 * Author: Emmanuel
 *
 * Created on 7 de enero de 2021, 01:06 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    long long res=0,aux,fact=0,acum=0,n,mod,ult,m;
	scanf("%d",&n);

mod=n%2;
m=n;
	if (mod!=0)
	{
		for (int i=1;i<=(n/2)+1;i++){
			aux=i*m;
		m--;
		acum+=aux;	
		ult=aux;	
		}
		res=(acum*2)-ult;
		printf("%d",res);
	}
	if (mod==0)
	{
		for (int i=1;i<=(n/2);i++){
			aux=i*m;
			
		m--;
		acum+=aux;	
		ult=aux;
		}
		res=(acum*2);
		printf("%d",res);
	
	}
    return (EXIT_SUCCESS);
}

