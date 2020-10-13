#include<stdio.h>
#include<stdlib.h>
#define SIZE 1000;

void conta(FILE* fp, char* id){
    int ch;
    int countA = 0, countC = 0, countT = 0, countG = 0;

    while((ch = fgetc(fp)) != EOF){
        if(ch == 'A'){
            countA++;
        }
        if(ch == 'C'){
            countC++;
        }
        if(ch == 'T') {
            countT++;
        }
        if(ch == 'G'){
            countG++;
        }
    }

    
    gc = ((double)(countG+countC)/(countG+countC+countA+countT))*100;

    printf("%.1lf\n", gc);

}



int main(){
    FILE* fp;
    char id[SIZE];
    double gc;
    fp = fopen("1.fasta", "r");

    if(fp == NULL){
        fprintf(stderr, "Error\n");
        return 1;
    }

    void conta(FILE* fp, char* id);

    
    fclose(fp);
    return 0;
}
