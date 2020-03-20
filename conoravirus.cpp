#include <iostream>
#include <string.h>
using namespace std;
//Este codigo te dara una idea de podras o no sobrivivir a la pandemia :)
int estado,prueba;
void analisis(int estado)
{	int nacion,casa;
	cout<<"Necesito que contestes una serie de preguntas"<<endl;
	cout<<"Escribe 1 si eres de España, italia o Colombia de lo contrario pon 0"<<endl;
	cin>>nacion;
	if(nacion==1)
	{ cout<<"si te estas quedando en casa escribe 1 de lo contrario 0: "<<endl;
		cin>>casa;
		if(casa==1)
		{cout<<"Todo esta bien hermano, sigue en casa puede que estes contagiado";
		}else
			{ cout<<"Por favor quedate en casa, busca una buena funeraria."<<endl;
			}
	}else
		{	
			cout<<"si te estas quedando en casa escribe 1 de lo contrario 0: "<<endl;
			cin>>casa;
			if(casa==1)
			{cout<<"Todo esta bien hermano, sigue en casa";
			}else
				{ cout<<"Por favor quedate en casa, tiene una buenas probabilidades de morir"<<endl;
				}
		}
}


int main(int argc, char** argv) {
	cout<<"Escribe 1 si tienes COD-19 de lo contrario 0, no mientas: ";
	cin>>estado;
	if(estado==1)
	{	analisis(estado);
	}else if(estado==0)
		{	cout<<"Estas seguro pon 1 si estas mal o 0 si todavia respiras: ";
			cin>>prueba;
			if(prueba==1)
			{ analisis(estado);
			}else
				{cout<<"Espero que no mientas, por el momento tienes buenas probabilidades de sobrevivir"<<endl;
				}
		}else
			{ cout<<"Te quivocaste por favor no es tan dificil elegir entre 1 y 0";
			}
	
	cout<<"Gracias por dar uso a mi codigo, les deseo lo mejor"<<endl;
	cout<<"No olvides el aislamiento.";
	return 0;
}
