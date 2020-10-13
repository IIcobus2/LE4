#ifndef QUESTAO2_H
#define QUESTAO2_H

#include<stdio.h>
#include<stdlib.h>



struct cadastro{
    char nome[50];
    int idade;
    long int CPF;
};

typedef struct cadastro Cad;

void lerArq();
#endif