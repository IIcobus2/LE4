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
    Pessoa p[60];
    for (int i = 0;i < 60;i++)
    {
        p[i].idade = 0;
    }
    FILE *f;
    f = fopen("log.bin","rb");
    fread(&p,sizeof(Pessoa),30,f);
    for(int i = 0;p[i].idade != 0;i++)
    {
        printf("%s\t%d\t%s\n",p[i].nome,p[i].idade,p[i].cpf);
    }
    fclose(f);
    return 0;
}
