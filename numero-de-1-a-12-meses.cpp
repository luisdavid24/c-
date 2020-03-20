#include <iostream>
#include <string.h>
using namespace std;
//en las funciones se debe poner un numero y debe devolver el equivalente en meses
int numero;

void mes(int numero)
{	if(numero==1)
	{	cout<<"El mes Enero";
	}else if(numero==2)
		{	cout<<"El mes Febrero";
		}else if(numero==3)
			{	cout<<"El mes es marzo";
			}else if(numero==4)
				{ cout<<"El mes es abril";
				}else if(numero==5)
					{cout<<"El mes es mayo";
					}else if(numero==6)
						{cout<<"El mes es junio";
						}else if(numero==7)
							{cout<<"El mes es julio";
							}else if(numero==8)
								{cout<<"El mes es Agosto";	
								}else if(numero==9)
									{cout<<"El mes es septiembre";
									}else if(numero==10)
										{ cout<<"El mes octubre";
										}else if(numero==11)
											{cout<<"El mes es noviembre";
											}else if(numero==12)
												{cout<<"El mes es diciembre";
												}
}
int main(int argc, char** argv) {
	cout<<"por favor pon un numero del 1 al 12 para buscarle su equilante en meses: ";
	cin>>numero;
	mes(numero);
//	cout<<"El resultado es: "<<resultado;
	
	
	return 0;
}
