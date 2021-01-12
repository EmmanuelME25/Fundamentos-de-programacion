/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Análisis de cadenas.c
 * Author: Emmanuel
 *
 * Created on 12 de enero de 2021, 03:47 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
    int cont[26];

int main(int argc, char** argv) {

    char cad[1000];
    
    scanf("%s",&cad);
    
    for(int i=0;i<=strlen(cad)-1;i++)
    {
    
        if(cad[i]=='a' || cad[i]=='A')
        {
            cont[0]++;
        }
               
        if(cad[i]=='b' || cad[i]=='B')
        {
            cont[1]++;
        }
            
        if(cad[i]=='c' || cad[i]=='C')
        {
            cont[2]++;
        }
        
        if(cad[i]=='d' || cad[i]=='D')
        {
            cont[3]++;
        }
                
        if(cad[i]=='e' || cad[i]=='E')
        {
            cont[4]++;
        }
               
        if(cad[i]=='f' || cad[i]=='F')
        {
            cont[5]++;
        }
                
        if(cad[i]=='g' || cad[i]=='G')
        {
            cont[6]++;
        }
                
        if(cad[i]=='h' || cad[i]=='H')
        {
            cont[7]++;
        }
        
        if(cad[i]=='i' || cad[i]=='I')
        {
            cont[8]++;
        }
                
        if(cad[i]=='j' || cad[i]=='J')
        {
            cont[9]++;
        }
                
        if(cad[i]=='k' || cad[i]=='K')
        {
            cont[10]++;
        }
        
        if(cad[i]=='l' || cad[i]=='L')
        {
            cont[11]++;
        }
                
        if(cad[i]=='m' || cad[i]=='M')
        {
            cont[12]++;
        }
                
        if(cad[i]=='n' || cad[i]=='N')
        {
            cont[13]++;
        }
                
        if(cad[i]=='o' || cad[i]=='O')
        {
            cont[14]++;
        }
                
        if(cad[i]=='p' || cad[i]=='P')
        {
            cont[15]++;
        }
                
        if(cad[i]=='q' || cad[i]=='Q')
        {
            cont[16]++;
        }
                
        if(cad[i]=='r' || cad[i]=='R')
        {
            cont[17]++;
        }
                
        if(cad[i]=='s' || cad[i]=='S')
        {
            cont[18]++;
        }
                
        if(cad[i]=='t' || cad[i]=='T')
        {
            cont[19]++;
        }
                
        if(cad[i]=='u' || cad[i]=='U')
        {
            cont[20]++;
        }
                
        if(cad[i]=='v' || cad[i]=='V')
        {
            cont[21]++;
        }
                
        if(cad[i]=='w' || cad[i]=='W')
        {
            cont[22]++;
        }
               
        if(cad[i]=='x' || cad[i]=='X')
        {
            cont[23]++;
        }
                
        if(cad[i]=='y' || cad[i]=='Y')
        {
            cont[24]++;
        }
                
        if(cad[i]=='z' || cad[i]=='Z')
        {
            cont[25]++;
        }
        
    }
    
    for(int i=0; i<=26-1;i++)
    {
        putchar(i+65);
        printf(" %d \n",cont[i]);
    }
    
    return (EXIT_SUCCESS);
}

