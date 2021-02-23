#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int indice, n, i=0, j=0, k=0;


		printf("\n############# ENTRADA ############\n");
		
		printf("digite o numero de linhas e colunas da sua matriz quadrada:");
		scanf("%d", &n);
		
		printf("\nPara:\n1.Soma de matrizes;\n2.Subtração de matrizes;\n3.Multiplicação de matrizes.\nDigite o indice: ");
		scanf("%d", &indice);
	
		float mA[n][n], mB[n][n], mF[n][n];	
		mA[n][n]= 0;
		mB[n][n]= 0;
		mF[n][n]= 0;
		
		for ( i=0; i<n; i++){
			for ( j=0; j<n; j++){
				printf("\nDigite o valor de a%d%d para mA e mB: ", i+1, j+1);
				scanf("%f %f", &mA[i][j], &mB[i][j]);
			}
		}
			printf("\n############# SAIDA ############\n\n");
			
		switch (indice){
			
			case 1:
			 for ( i=0; i<n; i++){
				for ( j=0; j<n; j++){
					mF[i][j]= mA[i][j]+mB[i][j];
					printf("\nNa matriz resultante:\nmF[%d][%d]= %0.1f", i+1, j+1, mF[i][j]);
				} //for i case 1
			} // for j case 1
						break;
			case 2:
			 for ( i=0; i<n; i++){
				for ( j=0; j<n; j++){
					mF[i][j]= mA[i][j]-mB[i][j];
					printf("\nNa matriz resultante:\na[%d][%d]= %0.1f", i, j, mF[i][j]);
				} //for i case 2
    		}	//for j case 2
    		break;
			case 3:
			 for ( i=0; i<n; i++){
				for ( j=0; j<n; j++){
						mF[i][j]= 0;
						for (k=0; k<n; k++){
					mF[i][j]+= mA[i][k]*mB[k][j];
				}  //for k case 3
					printf("\nNa matriz resultante:\na[%d][%d]= %0.1f", i, j, mF[i][j]);
				} //for i case 3
    		}	//for j case 3
    		break;
		} //switch
		




	return 0;
}
