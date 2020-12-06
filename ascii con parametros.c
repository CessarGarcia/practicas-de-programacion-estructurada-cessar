#include<stdio.h>
int main(int argc, char *argv []){
	

		if(argc >= 1 && argc <= 32){
		printf("El valor intruducido es un caracter de control");
	}
	else
		if (argc >= 33 && argc <= 47){
		printf("El valor intruducido es un caracter");
		}
	else
		if(argc >= 48 && argc <= 57){
		printf("El valor intruducido es numero");
		}
	else
		if(argc >= 58 && argc <= 64){
		printf("El valor intruducido es un signo");
		}
	else
		if(argc >= 65 && argc <= 90){
		printf("El valor intruducido es mayuscululas");
		}
	else
		if(argc >= 91 && argc <=96){
		printf("El valor intruducido es un signo");
		}
	else
		if(argc >= 97 && argc <= 122){
		printf("El valor intruducido es minuscula");
		}
	else
		if(argc >= 123 && argc <= 127){
		printf("El valor intruducido es un signo grafico");
		}
	else
		if(argc >= 128 && argc <= 166){
		printf("El valor intruducido es una letra especial");
		}
	else
		if (argc >= 167 && argc <=254){
		printf("El valor intruducido es una figura");
		}
		

}
