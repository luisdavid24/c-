#include <iostream>
//Este ejercicio consiste decir el numero de pinos y bambus que se pueden plantar en cierto territorio.
float territorio,pino,bambu;
int cantidadPino,cantidadBambu;
using namespace std;
int main(int argc, char** argv){
	pino=10;
	bambu=15;
	system("color 0A");
	cout<<"Por favor pon la de metros cuadrados que tiene tu terreno: ";
	scanf("%f",&territorio);
	cantidadPino=territorio*35/100;
	cantidadPino=cantidadPino*4/pino;
	cantidadBambu=(territorio*65/100);
	cantidadBambu=cantidadBambu*5/bambu;
	system("color 0D");
	cout<<"\nLa cantidad de pinos que se pueden sembrar es de: "<<cantidadPino;
	cout<<"\nLa cantidad de pinos que se pueden sembrar es de: "<<cantidadBambu;
	


	
	return 0;
}
