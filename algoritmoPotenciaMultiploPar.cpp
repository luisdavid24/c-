#include <iostream>
#include <math.h>
int numero1,numero2,resultadoPotencia;
using namespace std;
float potencia(int numero1, int numero2)
{	
//	return pow(nuermo1,numero2);
// TENGO PROBLEMAS CON HACER LA POTENCIA :(
}
void multiplo(int numero1,int numero2)
{	if(numero1%3==0)
	{ cout<<numero1<<" es multiplo de 3"<<endl;
	}else 
		{ cout<<numero1<<" no es multiplos de 3"<<endl;
		}
	if(numero2%3==0)
	{ cout<<numero2<<" es multiplo de 3"<<endl;
	}else 
		{ cout<<numero2<<" no es multiplos de 3"<<endl;
		}
	
}
void par(int numero1,int numero2)
{	if(numero1%2==0)
	{ cout<<numero1<<" es par"<<endl;
	}else 
		{ cout<<numero1<<" es impar"<<endl;
		}
	if(numero2%2==0)
	{ cout<<numero2<<" es par"<<endl;
	}else 
		{ cout<<numero2<<" es impar"<<endl;
		}
}
int main(int argc, char** argv) {
	cout<<"Escribe el primer numero(entero): ";
	cin>>numero1;
	cout<<"Escribe el segundo numero(entero): ";
	cin>>numero2;
	resultadoPotencia=potencia(numero1,numero2);
	multiplo(numero1,numero2);
	par(numero1,numero2);
	
	return 0;
}
