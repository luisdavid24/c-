#include <iostream>
//Este ejercicio consiste en observas cual de los tres numero proporcionados por el usuario es mayor.
float numero,numero2,numero3;
using namespace std;
int main(int argc, char** argv){
	printf("Escribe el numero uno: ");
	scanf("%f",&numero);
	printf("\nEscribe el numero dos: ");
	scanf("%f",&numero2);
	printf("\nEscribe el numero tres: ");
	scanf("%f",&numero3);
	
	
	if(numero<numero3 && numero<numero2)
	{ printf("\nDe los tres numero es menos es:%.1f ",numero);
	}else if (numero2<numero && numero2<numero3)
			{ printf("\nDe los tres numero es menos es:%.1f ",numero2);
			}else
			{ printf("\nDe los tres numero es menos es:%.1f ",numero3);
			} 
	
	return 0;
}
