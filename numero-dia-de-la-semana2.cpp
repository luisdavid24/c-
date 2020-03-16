#include <iostream>
int numero;
using namespace std;
// en este caso se debe decir que dia de la semana es segun el numero dado por el ususario :)
int main(int argc, char** argv) {
	system("color 0A");
	cout<<"Escriba un numero que se encuentre entre el 1 y 7:";
	scanf("%d", &numero);
	
	system("color 0D");
	if(numero==2){
		printf("\nEl dia es Martes");
	}else if(numero==1)
		{ printf("\nEl dia es Lunes");
		}else if(numero==3)
			{printf("\nEl dia es Miercoles");
			}else if(numero==4)
				{printf("\nEl dia es Jueves");
				}else if(numero==5)
					{printf("\nEl dia es Viernes");
					}else if(numero==6)
						{printf("\nEl dia es Sabado ");
						}else if(numero==7)
							{printf("\nEl dia es Domingo");
							}else
							{	system("color 0B");
								printf("\nEres un fracaso no puedes elegir un numero entero entre 1 y 7 :)");
							}
	
	
		
	
		
		
	
	return 0;
}
