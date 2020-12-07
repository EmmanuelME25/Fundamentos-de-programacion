/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Menu de funciones.c
 * Author: Emmanuel
 *
 * Created on 7 de diciembre de 2020, 08:48 AM
 */

#include <stdio.h>
#include <stdlib.h>
void ver(int opc);
void cf();
void fc();
void ck();
void fk();
void kf();
void kc();



int main(int argc, char** argv) {

    int op=0;
    double c=0,f=0,k=0;
    do
    {
        system("cmd /c cls");
        printf("Seleccione 1 para C a F \n");
        printf("Seleccione 2 para F a C \n");
        printf("Seleccione 3 para C a K \n");
        printf("Seleccione 4 para F a K \n");
        printf("Seleccione 5 para K a F \n");
        printf("Seleccione 6 para K a C \n");
        printf("Seleccione 7 para salir \n");

        scanf("%d",&op);
        
        ver(op);

    } 
    while(op!=7);
    
    
    return (EXIT_SUCCESS);
}

void cf ()
{
    printf("ingrese grados a convertir: ");
    int y=0;
    scanf("%lf",&y);
    printf("%lf \n",y*(1.8)+32);
    system("cmd /c pause");
}
void fc ()
{
        printf("ingrese grados a convertir: ");
    int y=0;
    scanf("%lf",&y);
    printf("lf \n",(y-32)/1.8);
    system("cmd /c pause");
}
void ck ()
{
       printf("ingrese grados a convertir: ");
    int y=0;
    scanf("%lf",&y);
    printf("%lf \n",y+273.15);
    system("cmd /c pause");
}
void fk ()
{
        printf("ingrese grados a convertir: ");
    int y=0;
    scanf("%lf",&y);    
    printf("%lf \n",((y-32)/1.8)+283.15);
    system("cmd /c pause");

}
void kf ()
{
        printf("ingrese grados a convertir: ");
    int y=0;
    scanf("%lf",&y);
    printf("%lf \n",(y-273.15)*(9/5)+32);
        system("cmd /c pause");

}
void kc ()
{
        printf("ingrese grados a convertir: ");
    int y=0;
    scanf("%lf",&y);
    printf("%fl \n",y-273.15);
    system("cmd /c pause");

}

void ver(int opc){
    switch (opc){
        case 1 :{
            cf();            
            break;
        }
        case 2 :{
            fc();
            break;
        }
        case 3 :{
            ck();
            break;
        }
        case 4 :{
            fk();
            break;
        }
        case 5 :{
            kf();
            break;
        }
        case 6 :{
            kc();
            break;
        }
        
        case 7 :{
            printf("Salir\n");
            break;
        }
        default:{
            printf("caso defecto\n");
            break;
        }
    }
      
}