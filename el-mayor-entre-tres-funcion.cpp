#include <iostream>
float n1,n2,n3,MAY;
using namespace std;
//en las funciones se debe poner el tipo-dato que devuelve
float mayor(float n1,float n2,float n3)
{if(n1>n2 &&n1>n3)
	{ return n1;
	}else if(n2>n1&&n2>n3)
		{ return n2;
		}else
			{ return n3;
			}
	
}
int main(int argc, char** argv) {
	cout<<"Pon el numero1 :";
	cin>>n1;
	cout<<"Pon el numero2 :";
	cin>>n2;
	cout<<"Pon el numero3 :";
	cin>>n3;
	if(n1!=n2 && n1!=n3 &&n2!=n3)
	{	MAY=mayor(n1,n2,n3);
		cout<<"EL numero mayor es: "<<MAY;
	}else
		{ cout<<"Existen numeros iguales";
		}
		
	
	return 0;
}
