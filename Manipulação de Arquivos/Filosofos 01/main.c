/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("filosofos.txt", "rt");
    FILE *gr;
    gr = fopen("classificados.txt", "wt");
    char nomes[200][60];
    char *leitura;
    int i,k;
    if(fp!=NULL){
        ("Arquivo aberto com sucesso.");
        for(i=0; i<200; i++){
            leitura = fgets(nomes[i], 60, fp);
            if(leitura){
               printf("\n%s", nomes[i]);
            }
        }
        
        for(i=199; i>=0; i--){
            fputs(nomes[i], gr);
        }
    }else{
        printf("O arquivo não pode ser aberto.");
    }
    
}