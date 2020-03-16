#include <iostream>

float Altura,Base,Area;
using namespace std;
int main(int argc, char** argv){
	system("color 0A");
	cout<<"Base: ";
	scanf("%f",&Base);
	cout<<"\nAltura: ";
	scanf("%f",&Altura);
	Area=Base*Altura/2;
	system("color 0D");
	cout<<"\nArea:"<<Area;
	
	
	
	return 0;
}

