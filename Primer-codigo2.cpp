#include <iostream>
#include <math.h>
#define euler 2.718
char nombre[11];
int numero;
using namespace std;
int main(int argc, char** argv){
	system("color 0A");
	cout<<"Bienvenido a ingenieria mecanica";
	cout<<"\nUsuario: ";
	cin>>nombre;
	cout<<"\nCodigo: ";
	cin>>numero;
	system("color 0D");
	cout<<"\nUser:"<<nombre<<endl;
	cout<<"Numero:"<<numero;
	cout<<"\ntan(numero):"<<tan(numero)<<endl;
	
	return 0;
}
