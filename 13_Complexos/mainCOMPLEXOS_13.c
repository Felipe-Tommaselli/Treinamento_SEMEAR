#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ENTER(char c){
printf("DIGITE ENTER PARA INICIAR:"); 
while (c!= 13){
	c =getch();
	 if (c==13 )
	 break;
	 else
	 printf("\n\t\t(qual parte do ""digite enter para iniciar"" vc nao entendeu?)\nhere we go again\nDIGITE ENTER PARA INICIAR\n");
} 
}

typedef struct{
	int real, imaginario;
} complexo;

void scan(complexo z[3]){
	char bolinha= (char)167;
	for (int i=0; i<2; i++){
	printf("\nDigite a parte real e imaginaria do %d%c numero complexo, na forma z=a + b*j:\na= ", i+1, bolinha); scanf("%d", &z[i].real);
	printf("b= "); scanf("%d", &z[i].imaginario); printf("\tobrigado :)\n");
	system("cls");
	}
}
complexo op(complexo z[3], int indice, char *op) {
	switch (indice){
		case 1:
			z[2].imaginario= z[0].imaginario +z[1].imaginario; 
			z[2].real= 	z[0].real + z[1].real;
			*op= '+';
			break;
		case 2:
			z[2].imaginario= z[0].imaginario - z[1].imaginario; 
			z[2].real= 	z[0].real - z[1].real;
			*op= '-';
			break;
		case 3:
			z[2].imaginario= z[1].real*z[0].imaginario + z[0].real*z[1].imaginario;
			z[2].real= z[0].real*z[1].real - z[0].imaginario*z[1].imaginario;
			*op= '*';
			break;
	}
	system("cls");
	return z[2];
}

int main(int argc, char *argv[]) {
char operador, c;
ENTER(c); 
system ("cls");
complexo z[3];
scan(z);

int indice; printf("\nSendo,\n1. Adicao\n2. Subtracao\n3. Multiplicacao\nDigite qual operacao vc deseja reaizar: ");  scanf("%d", &indice);

complexo res= op(z, indice, &operador);
printf("\n(%d+%dj) %c (%d+%dj)= (%d+%dj)", z[0].real, z[0].imaginario, operador, z[1].real, z[1].imaginario, z[2].real, z[2].imaginario);
	return 0;
}
