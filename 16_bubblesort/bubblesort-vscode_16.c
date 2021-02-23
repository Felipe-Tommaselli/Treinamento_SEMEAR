#include <stdio.h>
#include <stdlib.h>

void comparatroca(int *a, int *b){	//aq no parametro a gente ta falando que aquela posicao no vetor a gente chamou de a e a proxima de b
	int aux; //essa aux eh pq nao podemos trocar os valores diretamente, tem q utilizar elq como auxiliar
	if(*a>*b){	//no bubblesort, se um eh maior que o outro a gente inverte as posicoes
		aux= *a;   
		*a= *b;
		*b= aux;
	}	//esse * nao influencia em nada na dinamica, de troca
}

int main(){

	int * vetor= (int *) malloc(10*sizeof(int));
	//vetor[10]; 	//finge que a gente ta fazendo assim

	printf("Digite os valores de entrada:\n");
	for (int i=0; i<10; i++)  //for basico pra escanear cada valor da funcao 
		scanf("%d", &(vetor[i]));   //se vc quiser vc pode tirar o & pq o programa ja sabe q vc ta falando de uma
	//							//sequencia de enderecos de memoria, um vetor
	//agora a gente ja escaneou os valores da funcao
	
	for (int m=0; m<10; m++){	//a gente ta percorrendo o veotr duas vezes, as duas do 0 ate o fim
		for (int j=0; j<9-m; j++){	//nesses caso a gente ta 
			comparatroca( &(vetor[j]), &(vetor[j+1])); //a gente ta mandando como parametro o vetor em ua posicao
		}										//e o vetor na proxiam posicao, pra a gente fazer aquelas troca
	}				
	/*se voce nao ta manjando de ponteiros, entende que basicamente o que for feito na funcao, com a e com b vai
	alterar diretamente os valores do vetor na posicao, por isso nao precisamos retornar nada
	*/
	printf("\n########## Saida: #############\n");
	for (int p=0; p<10; p++)	//tamo printando a saida bem padrao
	printf("%d ", vetor[p]);
	
	free(vetor);  //esquece isso aq tbm n influencia em nada
return 0;
}