#include <iostream>
#include <math.h>
#define euler 2.718
char user[11];
int cod;
using namespace std;
int main(int argc, char** argv){
	
	cout<<"Bienvenido al PIJC 2020-1";
	cout<<"\nUsuario ";
	scanf("%s",&user);
	cout<<"\nCodigo ";
	scanf("%d",&cod);
	cout<<"\nUser "<<user<<"\nCod "<<cod;
	cout<<"\ntan(cod): "<<tan(cod)<<endl;
	
	return 0;
}

