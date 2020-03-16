#include <iostream>
char llamada;
int operador,minutos;
//en este ejercicio consiste en hacer un codigo que del el valor de la telefonia.
int main(int argc, char** argv) {
	printf("Escriba el de que tipo es tu llamada local(l),internacional(i) o nacional(n): ");
	scanf("%s",&llamada);
	printf("Escriba la cantidad de minutos utilizados: ");
	scanf("%d",&minutos);
	switch (llamada)
	{
		case 'n':
			if (minutos<=5){
				minutos=minutos*200;
			} else if (minutos>5){
					minutos=minutos*300;
				}
			break;
		case 'l':
			if(minutos<=5){
				minutos=minutos*100;
			}else if(minutos>5){
					minutos=minutos*300;
				}
				break;
		case 'i':
			printf("Escribe 9 o 5 segun cual sea tu operador: ");
			scanf("%d",&operador);
			switch(operador){
				case 5:
					if(minutos<=5){
						minutos=minutos*400;
					}else if (minutos>5){
							minutos=minutos*600;
						}				break;
				case 9:
					if (minutos<=5){
						minutos=minutos*500;
					}else if(minutos>5){break;
							minutos=minutos*580;
						}
						break;
				default:
					printf("\nHay un error");	
			}
		default:
			printf("\nhay un problema");
			
	}
	printf("Valor a pagar es: %d",minutos);
	
	return 0;
}
