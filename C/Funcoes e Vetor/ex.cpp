#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limpaTela(){
	system("cls");
}

int aguarde(float seconds){
	clock_t fim;
	fim = clock () + seconds * CLOCKS_PER_SEC;
	while (clock() < fim) {}
}

void telaCarregar(){

	int tempo,i;
	
	printf("\n\n\n\n");
	printf("\t\t\t Exercicio de: Danilo Calvo Zeni");
	printf("\n\n\n\n");
	printf("\n\n\n\n");
	printf("\n\n\n\n");
	printf("\n\n\n\n");
	printf(" CARREGANDO...\n");
	for(i = 1;i <= 80;i++)
	 {
		aguarde(0.05);
		tempo = 0;   
		printf( "%c",178);
	 }
	system("cls");
}

void telaVetor(int matriz[] ){
	limpaTela();
	printf("\n\n\n\n");
	printf("\n\t\t\t Valor[%i]: %i",1,matriz[1]);
	printf("\n\t\t\t Valor[%i]: %i",2,matriz[2]);
	printf("\n\t\t\t Valor[%i]: %i",3,matriz[3]);
	printf("\n\t\t\t Valor[%i]: %i",4,matriz[4]);
	printf("\n\t\t\t Valor[%i]: %i",5,matriz[5]);
	printf("\n\t\t\t Valor[%i]: %i",6,matriz[6]);
	printf("\n\t\t\t Valor[%i]: %i",7,matriz[7]);
	printf("\n\t\t\t Valor[%i]: %i",8,matriz[8]);
	printf("\n\n\n\n\n\n");
	
}

int acharMaior(int matriz[],int qtd){
   int i, ma;
   ma = 0;
   for(i=1; i <= qtd; i++){
      if (matriz[i] > ma){
         ma = matriz[i];
      }
   }
   return ma;
}

int acharMenor(int matriz[],int qtd){
   int i, me;
   me = acharMaior(matriz,qtd);
   for(i=1; i <= qtd; i++){
   	
      if (matriz[i] <= me){
         me = matriz[i];
      }
   }
   return me;
}

int acharMedia(int matriz[],int qtd){	
   int i, media,me;
   for(i=0; i <= qtd; i++){
   		media = media + matriz[i];
   }
   me = media / qtd;
   return me;
}

main(){
	
	int i,matriz[8],maior,menor;
	float soma,mediatodos,mediamm ;
	
	telaCarregar();
	
	for(i=1;i<=8;i++){
		matriz[i] = 0;
	}
	
	telaVetor(matriz);
	
	for(i=1;i<=8;i++){
		printf ("\n\tDigite o Valor[%i]: ",i);
			scanf ("%i", &matriz[i]);		
		telaVetor(matriz);
	}
	
	maior = acharMaior(matriz,8);
	menor = acharMenor(matriz,8);
	soma = maior + menor;
	mediatodos = acharMedia(matriz,8);
	mediamm = (maior + menor) / 2;
	printf ("\n\tMaior: %i  \t\t\t Menor: %i",maior, menor);
	printf ("\n\tSoma (maior+menor): %.2f  \t\t\tMedia de Todos: %.2f",soma,mediatodos);
	printf ("\n\tMedia (maior/menor): %.2f \n\n\n\n ",mediamm);
}
