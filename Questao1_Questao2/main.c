#include "questao2.h"

int main(void){
    Cad l[50];
    FILE* fp;
    scanf("%[^\n]s", l->nome);
    getchar();
    scanf("%d", &l->idade);
    scanf("%ld", &l->CPF);

    fp = fopen("log.bin","ab");

    if(fp == NULL){
        fprintf(stderr, "Erro!! Não foi possível abrir o arquivo\n");
        return 1;
    } 

    fwrite(&l, sizeof(Cad),1,fp);
    fclose(fp);

    lerArq();

    return 0;
}