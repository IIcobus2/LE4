#include "questao2.h"

void lerArq(){
    int i;
    FILE* fp;
    Cad l[50];

    for(i = 0; i < 50; i++){
        l[i].idade = 0;
    }
    fp = fopen("log.bin","rb");

    if (fp == NULL){
       printf("Error! opening file");
       exit(1);
    }
    fread(&l, sizeof(Cad), 50, fp);
    fclose(fp);

    for(i = 0; l[i].idade != 0; i++){
        printf("Nome: %s\tIdade: %d\tCPF: %ld\n", l[i].nome, l[i].idade, l[i].CPF);
    }
}
