/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mayor de una matriz.c
 * Author: Emmanuel
 *
 * Created on 7 de enero de 2021, 01:54 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int m,n,aux=0;
	
    scanf("%d",&m);
    scanf("%d",&n);
	
	int mat[m][n];
	
	for (int j=0;j<=m-1;j++){
		
		for (int i=0;i<=n-1;i++){
			scanf("%d",mat[j][i]);
			
			if (mat[j][i]>aux)
			{
				aux=mat[j][i];
			}
		}
		
	}
	printf("%d",aux);

    return (EXIT_SUCCESS);
}

