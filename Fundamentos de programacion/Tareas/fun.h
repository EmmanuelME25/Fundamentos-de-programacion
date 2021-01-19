/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fun.h
 * Author: Emmanuel
 *
 * Created on 19 de enero de 2021, 01:20 PM
 */

#ifndef FUN_H
#define FUN_H
float pi;

    int suma(int a, int b);
    int resta(int a, int b);
    char prim(char* cadena);
    double ac(int radio);
    
    int suma(int a, int b)
    {
        return a+b;
    }
    
    int resta(int a, int b)
    {
        return a-b;
    }
    char prim(char* cadena)
    {
        return cadena[0];
    }
    double ac(int radio)
    {
        return pi*radio*radio;
    }
    
#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* FUN_H */

