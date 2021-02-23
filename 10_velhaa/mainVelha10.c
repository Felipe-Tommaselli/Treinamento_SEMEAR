#include <stdio.h>
#include <stdlib.h>
#define TAM 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ENTER(char c){
printf("\nDIGITE ENTER PARA INICIAR:"); 
while (c!= 13){
	c =getch();
	 if (c==13 )
	 break;
	 else
	 printf("\n(\aqual parte do \"digite enter para iniciar\" vc nao entendeu?)\n\nhere we go again\nDIGITE ENTER PARA INICIAR:\n\n");
} 
}
char tabuleiro[3][3];

void zeratabuleiro(){
printf ("\n============= JOGO DA VELHA ============\n\t(tbm disponivel para jovens)\n\n");

	for (int i=0; i<TAM; i++){
		for (int j=0; j<TAM; j++){		
		tabuleiro[i][j]= (char)63;
		printf("\t%c", tabuleiro[i][j]);
		}
	printf("\n");
	}
	printf("\n=========================================\n");
}  //zeratabuleiro

void imptabuleiro(){
	printf("\n=========== JOGO DA VELHA ==========\n\t(tbm disponivel para jovens)\n\n");
	for (int i=0; i<TAM; i++){
		for (int j=0; j<TAM; j++){		
		printf("\t%c", tabuleiro[i][j]);
		}
	printf("\n");
	}
	printf("\n=========================================\n");
}  //imptabuleiro

int jogada(char jogador){
	int linha, coluna, val;
			printf("Por favor jogador %c, escolha qual linha & coluna vc deseja marcar:\nLinha: ", jogador);
			scanf("%d", &linha);
			printf("\nColuna: ");
			scanf("%d", &coluna);
			if (tabuleiro[linha][coluna]==(char)63){
			tabuleiro[linha][coluna]=jogador;
			val=1;
			}else{
				printf("\nJOGADA INVALIDA\n");	
				val=0;	
			}

	return val;
} // jogada

int vencer (){
printf("\n\t");
for (int i=0; i<TAM; i++){
	if(tabuleiro[i][0]== tabuleiro[i][1] && tabuleiro[i][0]== tabuleiro[i][2] && tabuleiro[i][0]!= '?'){
		printf("PARABEEEEEEENS, VOCE GANHOU! JOGO FINALIZADO!");
		return 1;
	}else if (tabuleiro[0][i]== tabuleiro[1][i] && tabuleiro[0][i]== tabuleiro[2][i] && tabuleiro[0][i]!= '?'){
			printf("PARABEEEEEEENS, VOCE GANHOU! JOGO FINALIZADO!");
			return 1;
	}
	if (tabuleiro[0][0]== tabuleiro[1][1] && tabuleiro[0][0]== tabuleiro[2][2] && tabuleiro[0][0]!= '?'){
			printf("PARABEEEEEEENS, VOCE GANHOU! JOGO FINALIZADO!");
			return 1;
	} else if(tabuleiro[0][2]== tabuleiro[1][1] && tabuleiro[0][2]== tabuleiro[2][0] && tabuleiro[2][0]!= '?'){
			printf("PARABEEEEEEENS, VOCE GANHOU! JOGO FINALIZADO!");
			return 1;
	}

}
return 0;
}

int main(int argc, char *argv[]) {
	int resultado_jogadaA=1, resultado_jogadaB=1, controle= 0;
	char jogA, jogB, c;
	ENTER(c); system("cls");
	jogA= 'X';  //(char) 65
	jogB= 'O';  //(char) 66
 
	zeratabuleiro ();

	while (controle<=9){
		
		resultado_jogadaA = jogada (jogA);  
		system ("cls");
	//	printf("resultado da jogada: %d\n", resultado_jogadaA);
		imptabuleiro ();
		if (vencer ())
		break;
		
		controle++;		
		
		resultado_jogadaB = jogada (jogB); 
		system ("cls");
	//	printf("resultado da jogada: %d\n", resultado_jogadaB);
		imptabuleiro ();
			if (vencer ())
		break;
	
		controle++;
	}

return 0;
}
