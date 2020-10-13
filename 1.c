#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct pessoa{
    char nome[50];
    int idade;
    char cpf[100];
}Pessoa;
int main(void)
{
    Pessoa p;
    printf("digite o nome da pessoa:\n");
    fflush(stdin);
    scanf("%[^\n]s", p.nome);
    printf("digite sua idade:\n");
    scanf("%d",&p.idade);
    printf("digite seu CPF:\n");
    getchar();
    scanf("%[^\n]s", p.cpf);
    FILE *f =  fopen("log.bin","ab");
    fwrite(&p,sizeof(Pessoa), 1 ,f);
    fclose(f);
    return 0;
}
