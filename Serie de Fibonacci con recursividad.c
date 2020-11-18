#include <stdio.h>
// serie de Fibonacci con recursividad
void fibonacci(int penultimo, int ultimo, int n){
	int actual;
	printf("%d ", ultimo);
		if(n>1){
		actual = penultimo + ultimo;
		n--;
		fibonacci(ultimo, actual,n);		
	}
	
}

int main(int argc, char *argv[]){
	fibonacci(0,1,3);
	return 0;
}
