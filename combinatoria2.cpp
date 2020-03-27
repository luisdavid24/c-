#include <iostream>
float C,FAC1,FAC2,FAC3,fac;
int m,n,i;
using namespace std;
/*Pasos para crear libreria
1.DEjar en comentario los subprogramas 
2.Archivo/nuevo/codigo fuente
3.Crear el codigo de la libreria
4.Archivo/guardar como
guardar en: c:/dev-cpp/include
nombre:Fac
tipo: headers file *.h
Guardar
5.En programa princial escribir
#include"fac.h"
*/



float factorial(int x)
{ fac=1,i=2;
	while(i<=x)
	{	fac=fac*i;
		i=i+1;
	}
	return fac;	
}	

int main(int argc, char** argv){
	cout<<"M:";
	cin>>m;
	cout<<"N: ";
	cin>>n;
	FAC1=factorial(m);
	FAC2=factorial(m-n);
	FAC3=factorial(n);
	C=FAC1/(FAC2*FAC3);
	cout<<"Combinatoria:"<<C;
	
	return 0;
}
