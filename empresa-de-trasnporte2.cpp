#include <iostream>
//Este ejercicio consiste decir el valor un envio de un producto que se pueden repatir entre seis barrios.
using namespace std;
int pedido1,pedido2,pedido3;
float total;
int main(int argc, char** argv){
	system("color 0A");
	cout<<"Escriba para que barrio se dirigio el envio1 (recuerda que tiene la opcion del numero 1 al 6):";
	scanf("%d",&pedido1);
	cout<<"\nEscriba para que barrio se dirigio el envio2 (recuerda que tiene la opcion del numero 1 al 6): ";
	scanf("%d",&pedido2);
	cout<<"\nEscriba para que barrio se dirigio el envio3 (recuerda que tiene la opcion del numero 1 al 6): ";
	scanf("%d",&pedido3);
	system("color 0D");
	if(pedido1==pedido2 and pedido2==pedido3)
	{ total=63000;
	}else if(pedido1==pedido2 or pedido2==pedido3 or pedido1==pedido3)
		{ total=81000;
		}else
		
			{ total=90000;
			}
	system("color 0C");
	cout<<"\nvalor a pagar es de: "<<total;
	

	
	return 0;
}
