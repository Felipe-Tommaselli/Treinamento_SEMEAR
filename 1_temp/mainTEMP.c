#include <stdio.h>

int main (){
	
	double Tf, Tc;
	printf ("\n\n\tTemperatura em F: ");
	scanf ("%lf", &Tf);
		
	Tc= (5*Tf- 5*32)/(9);
	
	printf("\n\tTemperatura em C: %0.3lf", Tc);
	return 0; 
}
