#include <iostream>
float C,FAC1,FAC2,FAC3,fac;
int m,n,i;
using namespace std;
void factorial(int x)
{ 	fac=1,i=2;
	while (i<=x)
	{	fac=fac*i;
		i=i+1;
	}
}
	
int main(int argc, char** argv){
	cout<<"M:";
	cin>>m;
	cout<<"N: ";
	cin>>n;
	factorial(m);
	FAC1=fac;
	factorial(m-n);
	FAC2=fac;
	factorial(n);
	FAC3=fac;
	C=FAC1/(FAC2*FAC3);
	cout<<"Combinatoria:"<<C;
	
	return 0;
}
