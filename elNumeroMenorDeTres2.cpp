#include <iostream>
//Este ejercicio consiste en observas cual de los tres numero proporcionados por el usuario es mayor.
float numero,numero2,numero3;
using namespace std;
int main(int argc, char** argv){
	system("color 0A");
	cout<<"Escribe el numero uno: ";
	scanf("%f",&numero);
	cout<<"\nEscribe el numero dos: ";
	scanf("%f",&numero2);
	cout<<"\nEscribe el numero tres: ";
	scanf("%f",&numero3);
	
	system("color 0D");
	if(numero<numero3 && numero<numero2)
	{ cout<<"\nDe los tres numero es menos es: "<<numero;
	}else if (numero3<numero && numero3<numero2)
			{ cout<<"\nDe los tres numero es menos es: "<<numero3;
			}else
			{  cout<<"\nDe los tres numero es menos es: "<<numero2;
			} 
	
	return 0;
}
