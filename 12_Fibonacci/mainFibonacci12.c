#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Fibo_e_nacci(int num){
if (num==0 || num==1)
	return num;	
else{
	//	printf("%d  ", num);
	return Fibo_e_nacci(num-1)+Fibo_e_nacci(num-2);
}	
}

int main(int argc, char *argv[]) {
int N, resp;    //n==num
scanf("%d", &N);
	for (int i=0; Fibo_e_nacci(i)<=N; i++){
		resp= Fibo_e_nacci(i+1);
		printf("%d  ", resp);
	}	
	return 0;
}
