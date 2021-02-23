#include <stdio.h>


int main(int argc, char *argv[]) {
	
 int i, v[10]= {0}, n, p;
 
 printf("######## DIGITAR NUMEROS DIFERENTES #########\n\n");

 for (i=0; i<10; i++){
 	printf("Digite o numero%d: ", i+1);
	scanf ("%d", &v[i]);
	 
	 for (p=i-1; p>=0; p--){
	 
	 	if(v[i]==v[p]){
	 		i -= 1;
			printf ("Numero invalido! Digite um novo numero diferente dos anteriores!\n");
		 }	
 	
 	 }
 }
return 0;
}
