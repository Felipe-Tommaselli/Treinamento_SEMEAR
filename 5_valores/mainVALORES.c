#include <stdio.h>


int main(int argc, char *argv[]) {
	
	float qv, ax, min=999999999999, max= -999999999999, med= 0, soma=0;  //declarei o min como um valor mto grande para dar inicio no for, o msm para o max (espera-se que seja imrovavel que o usuario digite um numero maior/menor que esses) 
	int v; 
	scanf("%f", &qv);

	printf("\nQuantidadede de valores: %.2f", qv);
	
	for ( v=1; v<=qv; v++){
	
		printf("\nvalor%d:", v);
		scanf("%f", &ax);
	
		if (ax<min){     
		min= ax;}
		
		if (ax>max){
		max= ax;}
		
		soma= soma + ax;			//fixei uma variavel representando ao final do ciclo a soma de todos os valores
		
		printf ("\nO valor minimo e: %.2f\nE o valor maximo e: %.2f", min, max);
		
		med= (soma)/(v);
		printf("\nA media vale: %.2f\n\n", med);

		}
		printf ("\n-----------------------------------------------------------------------------------------------------\nO valor minimo e: %.2f\nE o valor maximo e: %.2f", min, max);
		
		med= (soma)/(qv);
		printf("\nA media vale: %.2f\n", med);

	return 0;
}
