#include <iostream>
#include <string.h>
char llamada[25];
int operador,minutos;
//en este ejercicio consiste en hacer un codigo que del el valor de la telefonia.
int main(int argc, char** argv) {
	system("color 0A");
	printf("Escriba el de que tipo es tu llamada local,internacional o nacional (por favor escribe en minuscula): ");
	scanf("%s",&llamada);
	printf("Escriba la cantidad de minutos utilizados: ");
	scanf("%d",&minutos);
	if(strcmp(llamada,"local")==0)
	{	if(minutos<=5){
				minutos=minutos*100;
			}else if(minutos>5){
					minutos=minutos*200;
				}
			
	}else if(strcmp(llamada,"nacional")==0)
		{ 	if (minutos<=5)
				{	minutos=minutos*200;
				} else if (minutos>5)
					{	minutos=minutos*300;
					}
		}else if(strcmp(llamada,"internacional")==0)
				{
					printf("Escribe 9 o 5 segun cual sea tu operador: ");
					scanf("%d",&operador);
					switch(operador){
					case 5:
						if(minutos<=5){
							minutos=minutos*400;
						}else if (minutos>5){
							minutos=minutos*600;
							}break;
					case 9:
						if (minutos<=5){
							minutos=minutos*500;
						}else if(minutos>5){break;
							minutos=minutos*580;
						}break;
					default:
						printf("\nHay un error");	
				}
			
			}
	system("color 0D");
	printf("Valor a pagar es: %d",minutos);
	
	return 0;
}
