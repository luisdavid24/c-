#include <iostream>
//Este ejercicio consiste en mirar si un numero es positivo, negativo o cero.
int numero;
using namespace std;
int main(int argc, char** argv){
	system("color 0A");
	printf("Numero a evaluar: ");
	scanf("%d",&numero);
	system("color 0D");
	if(numero>0)
	{printf("El numero es positivo");
	}else if (numero==0)
			{printf("El numero es el cero");
			}else
			{ printf("El numero es el negativo");
			} 
	
	return 0;
}
