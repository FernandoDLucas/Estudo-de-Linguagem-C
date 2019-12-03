/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("aleatorios.txt", "rt");
    FILE *gr;
    gr = fopen("saida.txt", "wt");
    float num[5000];
    int i=0, k=0, aux=0;
    
    
    if(fp!=NULL){
        printf("Arquivo aberto com sucesso.");
        while((!feof(fp))&&(i<5000)){
            fscanf(fp,"%f", &num[i]);
            i++;
        }
    }else{
        printf("Erro na abertura do arquivo!");
    }
    for(i=0; i<5000; i++){
        for(k=i+1; k<5000; k++){
            if(num[i]>num[k]){
                aux = num[k];
                num[k] = num[i];
                num[i] = aux;
            }
        }
    }
    
    for(i=0; i<5000; i++){
        printf("\n%.2f", num[i]);
        fprintf(gr,"%.2f\n", num[i]);
    }
}
