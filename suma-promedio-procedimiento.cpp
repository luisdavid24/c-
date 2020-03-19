#include <iostream>
float n1,n2,n3,suma,prom;
using namespace std;
//en un procedimiento no se incluyen las variables de salida.
void calcular(float n1,float n2,float n3)
{	suma=n1+n2+n3;
	prom=suma/3;
}
int main(int argc, char** argv) {
	printf("Escribe la nota numero uno: ");
	scanf("%f",&n1);
	printf("Escribe la nota numero dos: ");
	scanf("%f",&n2);
	printf("Escribe la nota numero tres: ");
	scanf("%f",&n3);
	//Llamada al procedimiento
	calcular(n1,n2,n3);
	printf("\nLa suma es: %.1f",suma);
	printf("\nEl promedio es: %.1f",prom);
	
		
	
		
		
	
	return 0;
}
