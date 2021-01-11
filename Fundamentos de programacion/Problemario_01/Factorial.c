/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Factorial.c
 * Author: Emmanuel
 *
 * Created on 7 de enero de 2021, 01:27 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n;
unsigned long long aux=1;

scanf("%d",&n);


for (int i=1;i<=n;i++){
	aux*=i;
}	

	
printf("%d",aux);

    return (EXIT_SUCCESS);
}

