#include <stdio.h>

int main(int argc, char *argv[]) {

	float N1, N2, N3, N4, m, Ne;
	scanf("%f\n%f\n%f\n%f", &N1, &N2, &N3, &N4);

	m= (2*N1+ 3*N2 + 4*N3 + N4)/10;
	printf("\nMedia: %.1f\n", m);
	
	if (m<7 && m>=5){
	
		printf("Aluno em exame\n");
		scanf("\n%f", &Ne);
		m=(m+Ne)/2;
	
		printf("Nota do exame: %0.1f\nMedia final: %0.1f\n", Ne,m);
		if (m>=5)
			printf("Aluno aprovado");
		else
			printf("Aluno reprovado");
		
		
	} else if (m<5)
	  	printf("Aluno reprovado");
	  
	  else 
	  		printf("Aluno aprovado");
			printf(".");
	return 0;
}
