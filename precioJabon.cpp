#include <iostream>
//valor de un jabon
int pregunta;

using namespace std;
int main(int argc, char** argv){
	cout<<"Escribe 1 si el precio del jabon subio y 0 sino: ";
	cin>>pregunta;
	if(pregunta==1)
	{cout<<"Estas en una pandemia";
	}else
		{cout<<"Todo esta bien, pero deberias de comprar JABON Y PAPEL HIGIENICO";
		}
	
	return 0;
}
