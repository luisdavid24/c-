#include <iostream>
int n;
using namespace std;
// en este caso se debe decir que dia de la semana es segun el numero dado.
int main(int argc, char** argv) {
	printf ("Escriba un numero entre 1 y 7:");
	scanf("%d", &n);
	
	// segun ( variable ) haga
	
	switch (n){
		case 1:printf("El dia es Lunes");
			break;
		case 2:printf("El dia es Martes");
			break;	
		case 3:printf("El dia es Miercoles");
			break;
		case 4:printf("El dia es Jueves");
			break;
		case 5:printf("El dia es Viernes");
			break;
		case 6:printf("El dia es Sabado ");
			break;
		case 7:printf("El dia es Domingo");
			break;	
		default:
			printf("Numero Fuera del Rango");
		
	}	// fin segun caso
	
	
	return 0;
}
