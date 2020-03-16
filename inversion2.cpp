#include <iostream>
//Este ejercicio consiste en tres inversiones y debo dar el % de cada inversor.
float inversion1,inversion2,inversion3,inversionTotal,porcentaje1,porcentaje2,porcentaje3;
using namespace std;
int main(int argc, char** argv){
	system("color 0A");
	cout<<"Pon la inversion numero 1: ";
	scanf("%f",&inversion1);
	cout<<"\nPon la inversion numero 2: ";
	scanf("%f",&inversion2);
	cout<<"\nPon la inversion numero 3: ";
	scanf("%f",&inversion3);
	inversionTotal=inversion1+inversion2+inversion3;
	porcentaje1=inversion1*100/inversionTotal;
	porcentaje2=inversion2*100/inversionTotal;
	porcentaje3=inversion3*100/inversionTotal;
	system("color 0D");
	cout<<"\nEl porcentaje de la inversion1 es:"<<porcentaje1;
	cout<<"\nEl porcentaje de la inversion2 es:"<<porcentaje2;
	cout<<"\nEl porcentaje de la inversion3 es:"<<porcentaje3;
	

	
	return 0;
}
