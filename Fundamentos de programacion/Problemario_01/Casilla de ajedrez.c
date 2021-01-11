/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Casilla de ajedrez.c
 * Author: Emmanuel
 *
 * Created on 6 de enero de 2021, 11:55 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int num,mod;
char let;


scanf("%c",&let);
scanf("%d",&num);
if (num<=8&&num>=1&&(let=='a'||let=='b'||let=='c'||let=='d'||let=='e'||let=='f'||let=='g'||let=='h'))
{
mod=num%2;

if (mod==0){
	if (let=='b'){
		printf("NEGRO");
		return 0;
	}
		if (let=='d'){
		printf("NEGRO");
		return 0;
	}
		if (let=='f'){
		printf("NEGRO");
		return 0;
	}
		if (let=='h'){
		printf("NEGRO");
		return 0;
	}
}
if (mod==0){
	printf("BLANCO");
}
if (mod!=0){
	if (let=='a'){
		printf("NEGRO");
		return 0;
	}
	if (let=='c'){
		printf("NEGRO");
		return 0;
	}
	if (let=='e'){
		printf("NEGRO");
		return 0;
	}
	if (let=='g'){
		printf("NEGRO");
		return 0;
	}
	
}
if (mod!=0) {
	printf("BLANCO");
}
}
    return (EXIT_SUCCESS);
}

