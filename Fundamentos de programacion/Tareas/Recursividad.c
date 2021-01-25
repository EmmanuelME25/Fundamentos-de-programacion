/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Recursividad.c
 * Author: Emmanuel
 *
 * Created on 24 de enero de 2021, 08:04 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int fibonacci (int numero);

void main ()
{
  int r, valor;
  
  printf ("0");
  printf ("\n1");
  printf ("\n1");
  for (valor = 1; valor <= 20; valor++)
  {
    r = fibonacci (valor);
    printf ("\n%d", r);
  }
}

int fibonacci (int numero)
{
  if ((numero == 0) || (numero == -1)) 
    return 1;
  else
    return fibonacci (numero - 1) + fibonacci (numero - 2);
}
