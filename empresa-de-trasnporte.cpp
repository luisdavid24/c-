#include <iostream>
//Este ejercicio consiste decir el valor un envio de un producto que se pueden repatir entre seis barrios.
using namespace std;
int pedido1,pedido2,pedido3;
float total;
int main(int argc, char** argv){
	printf("Escriba para que barrio se dirigio el envio1 (recuerda que tiene la opcion del numero 1 al 6):");
	scanf("%d",&pedido1);
	printf("\nEscriba para que barrio se dirigio el envio2 (recuerda que tiene la opcion del numero 1 al 6): ");
	scanf("%d",&pedido2);
	printf("\nEscriba para que barrio se dirigio el envio3 (recuerda que tiene la opcion del numero 1 al 6): ");
	scanf("%d",&pedido3);
	if(pedido1==pedido2 and pedido2==pedido3)
	{ total=(30000*0.7)+(30000*0.7)+(30000*0.7);
	}else if(pedido1==pedido2 or pedido2==pedido3 or pedido1==pedido3)
		{ total=30000+(30000*0.85)+(30000*0.85);
		}else
		
			{ total=90000;
			}
	printf("valor es de: %.0f",total);

	
	return 0;
}
