#include <iostream>
//Este ejercicio consiste en mirar si un numero es positivo, negativo o cero.
int numero;
using namespace std;
int main(int argc, char** argv){
	
	printf("Numero a evaluar: ");
	scanf("%d",&numero);
	if(numero<0)
	{printf("El numero es negativo");
	}else if (numero>0)
			{printf("El numero es positivo");
			}else
			{ printf("El numero es el cero");
			} 
	
	return 0;
}
