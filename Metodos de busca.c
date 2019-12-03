//Algoritmos NP3

//Pesquisa Binária Bem Sucedida 
#include <stdio.h>

int main()
{
int inf,sup,m,p;
int i=0,k=0,count=0,encontrei=0,pesquisando=0; 
int a[200];
    
    for(i=1; i<=200; i++){
        a[i-1]=i*2;
    }

sup = (sizeof(a)/4) - 1; 
printf("%d", sup);
inf =0;
printf("\ndigite o numero a ser pesquisado\n");
scanf ("%i",&p);
pesquisando=1; // situacao de verdade
while (pesquisando==1)
{
	m=(sup + inf) / 2;
	if (a[m]==p)
		{printf("achei o valor - ele estah no vetor na posicao %d \n",m);
 		pesquisando= 0;} // para sair do laço principal
	else {
		if (a[m]<p)
			{inf = m+1;}
		else
			{if (a[m]>p)
				sup= m-1;};};
}
    
}

#include <stdio.h>

int main()
{
   int A[500];
   int i, sup, inf, pesquisa, m, c;
   for(i=0; i<500; i++){
       A[i]=i*3;
   }

sup = (sizeof(A)/4)-1;
inf = 0;
pesquisa = 1;
m=0;
printf("Insira o valor que deseja pesquisar: ");
scanf("%d", &c);

while(pesquisa == 1){
    m = (sup+inf)/2;
        if(A[m]==c){
            printf("Valor de %d encontrado na posição %d", c, m);
            pesquisa = 0;
        }
        else if(c<A[m]){
            sup = m - 1; 
        }else if(c>A[m]){
            inf = m + 1; 
        }
}
  
 
}


//Pesquisa Binária Mal Sucedida 
#include <stdio.h>

int main()
{
   int A[500];
   int i, sup, inf, pesquisa, m, c;
   for(i=0; i<500; i++){
       A[i]=i*3;
   }

sup = (sizeof(A)/4)-1;
inf = 0;
pesquisa = 1;
m=0;
printf("Insira o valor que deseja pesquisar: ");
scanf("%d", &c);

while(pesquisa == 1){
    m = (sup+inf)/2;
        if (inf>sup){
            printf("O número não existe no vetor ele esta entre a posição %d que possui valor %d e a posição %d que possui %d", inf-1, A[inf-1], sup+1, A[sup+1]);
           pesquisa = 0;
        }
        if(A[m]==c){
            printf("Valor de %d encontrado na posição %d", c, m);
            pesquisa = 0;
        }
        else if(c<A[m]){
            sup = m - 1; 
        }else if(c>A[m]){
            inf = m + 1; 
        }
}
  
 
}



//Metodo Bolha 

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int A[20];
   int i, aux, k;
   srand(time(NULL));
    for(i=0; i<20; i++){
        A[i] = (rand()%100);
        printf("%d " ,A[i]);
    }
    getchar();
    
    for(k=0; k<20; k++){
        for(i=k+1; i <20; i++){
            if(A[k]>A[i]){
                aux = A[k];
                A[k] = A[i];
                A[i] = aux;
            }
        }
    }
    
    printf("\n");

    for(i=0; i<20; i++){
        printf("%d " ,A[i]);
    }
    
 
}


//Metodo de Seleção
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[1000];
    int i, k, j, cont, troca, min, aux;
    for(i=0; i<1000; i++){
        A[i]=(rand()%10000);
        printf("%d ", A[i]);
    }
    
    for(i=0; i<1000; i++){
        min=i;
        for(j=min+1; j<1000; j++){
            cont++;
            if(A[j]>A[min]){
                min = j;
                troca++;
            }
        }
        
        aux = A[min];
        A[min] = A[i];
        A[i] = aux;
        
    }
    printf("\n\n \n \n \n");    

     for(i=0; i<1000; i++){
        printf("%d ", A[i]);
    }
    printf("\nForam feitas %d trocas", troca);    
    printf("\nO laço interno foi executado %d vezes", cont);

}

//Classificação de Matrizes pelo Método de Seleção
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[1000];
    int i, k, j, cont, troca, min, aux;
    for(i=0; i<1000; i++){
        A[i]=(rand()%10000);
        printf("%d ", A[i]);
    }
    
    for(i=0; i<1000; i++){
        min=i;
        for(j=min+1; j<1000; j++){
            cont++;
            if(A[j]>A[min]){
                min = j;
                troca++;
            }
        }
        
        aux = A[min];
        A[min] = A[i];
        A[i] = aux;
        
    }
    printf("\n\n \n \n \n");    

     for(i=0; i<1000; i++){
        printf("%d ", A[i]);
    }
    printf("\nForam feitas %d trocas", troca);    
    printf("\nO laço interno foi executado %d vezes", cont);

}



