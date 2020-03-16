#include <iostream>
//Este ejercicio consiste decir el numero de pinos y bambus que se pueden plantar en cierto territorio.
float territorio,pino,bambu;
int cantidadPino,cantidadBambu;
using namespace std;
int main(int argc, char** argv){
	pino=10;
	bambu=15;
	printf("Por favor pon la de metros cuadrados que tiene tu terreno: ");
	scanf("%f",&territorio);
	cantidadPino=(territorio*35/100)*4/pino;
	cantidadBambu=(territorio*65/100)*5/bambu;
	
	printf("\nLa cantidad de pinos que se pueden sembrar es de:%d ",cantidadPino);
	printf("\nLa cantidad de pinos que se pueden sembrar es de:%d ",cantidadBambu);

	
	return 0;
}
