#include <stdlib.h>
#include <stdio.h>

struct conversa{ 
    char mensagem[100];
};

int main(void){
    FILE* fp;
    int *ch;
    char a[200];
    struct conversa c;

    fp = fopen("conversa.txt","r");

    if(fp == NULL){
        fprintf(stderr, "Erro!! Não foi possível abrir o arquivo\n");
        return 1;
    } 
    while(fgets(a,sizeof(a),fp) != NULL)
    {

    }
    fclose(fp);
    fp = fopen("conversa.txt","a");
    if(a[2] != '2'){
        scanf("%[^\n]s", c.mensagem);
        getchar();
        fprintf(fp, "3.2: %s\n", c.mensagem);
    }else{
        fprintf(stderr, "Espere o seu amigo responder sua última mensagem!!\n");
        fclose(fp);
        return 1;
    }
    fclose(fp);

    
    return 0;
}