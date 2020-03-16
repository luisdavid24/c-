#include <iostream>

float Altura,Base,Area;
using namespace std;
int main(int argc, char** argv){
	//Inicio
	printf("Base: ");
	//Lea
	scanf("%f",&Base);
	printf("\nAltura: ");
	scanf("%f",&Altura);
	Area=Base*Altura/2;
	printf("\nArea:%.2f",Area);
	
	
	return 0;
}

