#include <stdio.h>

int main(){
	
	float peso, altura, IMC;
	
	printf("\nALTURA(m):");
	scanf("%f", &altura);
	printf("PESO(kg):");
	scanf("%f", &peso);
	
	IMC= (peso)/(altura*altura);
	
	printf("\nIMC: %0.2f\nClassificacao: ", IMC);
	
	if (IMC<18.5)
		printf("Abaixo do Peso");
	
	if (IMC< 24.90 && IMC> 18.6)
		printf("Peso Normal");
	
	if (IMC< 29.90 && IMC> 25)
		printf("Sobrepeso");

	if (IMC< 34.90 && IMC> 30)
		printf("Obesidade");
	
	if (IMC< 39.90 && IMC> 35)
		printf("Obesidade Moderada");

	if (IMC<49.90 && IMC> 40)
		printf("Obesidade Severa");

		if (IMC> 50)
		printf("Obesidade Morbida");

	return 0 ;
}
