#include <stdio.h>
#include <stdlib.h>

// Programa que calcula el factorial de un numero 

int main(int argc, char *argv[]){
	long int resultado=0;
	long int factorial;
	
	printf("Ingrese el numero para calcular su factorial ");
	scanf("%d", &factorial);
	
	resultado =1;
	while(factorial>1){
		resultado *=factorial;
		printf(" %ld x ", factorial);
		factorial--;
	}
	printf("1 = %ld\n\n", resultado);
	
	return 0;
}
