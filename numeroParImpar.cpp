#include <iostream>
#include <String.h>
char Resultado[12];
char* final;
int Num;
using namespace std;
//float
char* Prueba(int numero)
{	if(numero%2==0)
	{ 	strcpy(Resultado,"Es par.");
		
	}else 
		{ 	strcpy(Resultado,"Es impar.");
		}
	return Resultado;
}
int main(int argc, char** argv){
	cout<<"Escribe el numero: ";
	cin>>Num;
	final=Prueba(Num);
	cout<<final;

	return 0;
}
