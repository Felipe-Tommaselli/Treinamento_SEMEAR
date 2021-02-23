#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void comparatroca(int *a, int *b){
	int aux;
	if(*a>*b){
		aux= *a;
		*a= *b;
		*b= aux;
	}	
}

int main(){

	int * vetor= (int *) malloc(10*sizeof(int));
	
	printf("Digite os valores de entrada:\n");
	for (int i=0; i<10; i++)
	scanf("%d", &(vetor[i]));
	
	for (int m=0; m<10; m++){
		for (int j=0; j<9; j++){
			comparatroca( &(vetor[j]), &(vetor[j+1]));
		}
	}
	printf("\n########## Saida: #############\n");
	for (int p=0; p<10; p++)
	printf("%d ", vetor[p]);
	
	free(vetor);
return 0;
}
