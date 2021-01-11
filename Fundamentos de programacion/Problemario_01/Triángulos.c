/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triángulos.c
 * Author: Emmanuel
 *
 * Created on 6 de enero de 2021, 11:38 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int a=0,b=0,c=0,r=0;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
r=a+b+c;

	if (r==180){
		
		if((a==90&&b!=90&&c!=90)||(b==90&&a!=90&&c!=90)||(c==90&&b!=90&&a!=90))
		{
			printf("RECTANGULO");
			return 0;
		}
		if (a==b&& b==c&&c==a&& a==60){
		printf("EQUILATERO");
		return 0;
		}
		if(a!=60&&b!=60&&c!=60&&(a==b||b==c||c==a)&&(a!=b||b!=c||c!=a)) { 
		printf("ISOSCELES");
		return 0;
		}
			if (a!=b&&b!=c&&b!=a){
			printf("ESCALENO");
			return 0;
		}
	}
    return (EXIT_SUCCESS);
}

