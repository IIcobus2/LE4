fp = fopen("conversa.txt","w");
    fclose(fp);
    fp = fopen("conversa.txt","r");

    if(fp == NULL){
        fprintf(stderr, "Erro!! Não foi possível abrir o arquivo\n");
        return 1;
    }