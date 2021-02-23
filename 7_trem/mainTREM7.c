#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int entrada[5], saida [5], soma= 0, circ= 0, diferenca=0, transportados= 0, sub=0;

printf ("\n################ ESTACOES ##############\n");
printf ("\nTrajeto Campinas-Rio 8h\nEstacao 0: Campinas\nEstacao 1: São Paulo\nEstacao 2: Sao Jose dos Campos\nEstacao 3: Resende\nEstacao 4: Rio de janeiro \n");

	for (int a=0;a<5; a++){
		printf ("\nEstacao %d:\nQuantos passageiros embarcaram:", a);
		scanf("%d", &entrada[a]);
		printf ("\nQuantos passageiros desembarcaram: ");
		scanf("%d", &saida[a]);
		fflush(stdin);
	}
		for (int a=0;a<5; a++){
			circ= entrada[a]+saida[a];
			printf("\n\nCirculacao total de passageiros na estacao %d: %d", a, circ);
			soma+= entrada[a];
			sub+= saida[a];
			diferenca= entrada[a]-saida[a];
			transportados+= diferenca;
			printf("\nPassageiros transportados, Estacao %d: %d", a, transportados);
		}
printf("\n\ntotal de passageiros embarcados: %d", soma);
printf("\n\nDiferença entre Embarque-Desembarque: %d\n", soma-sub);
return 0;
}
