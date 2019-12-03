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
    fp = fopen("filosofos.txt", "rt");
    
    char nomes[200][60];
    int i, k, contarVogal=0;
    if(fp!=NULL){
        printf("Arquivo aberto com sucesso!");
        for(i=0; i<200; i++){
            fgets(nomes[i], 60, fp);
            for(k=0; k<60; k++){
                if((nomes[i][k] == 'a') || (nomes[i][k] == 'e') ||(nomes[i][k] == 'i') ||(nomes[i][k] == 'o') || (nomes[i][k] == 'u') ||
                (nomes[i][k] == 'A') ||(nomes[i][k] == 'E') ||(nomes[i][k] == 'I') ||(nomes[i][k] == 'O') ||(nomes[i][k] == 'U')){
                    contarVogal++;
                }
            }
        }
    } else{
        printf("Erro na leitura do arquivo!!!");
    }
    
    printf("O arquivo tem um total de %d vogais", contarVogal);
}
