#include <iostream>
//Este codigo busca eliminar un elemento de una vector. 
int *vector; 
int i,n,busqueda;
using namespace std;
void eliminarElemento(int *vector, int busqueda)
{ 	int i=1;
	int j=0;
	while(i<=n and busqueda!=vector[i])
	{	i++;
		
	}
	if(i<n)
	{	for(j=i;i<=(n-1);j++)
		{
			vector[j]=vector[j+1];
			cout<<"Entro";
		}
		n=n-1;
		
	}else{
		cout<<"El valor"<<busqueda<<"No esta en el vector";
	}
}
int main(int argc, char** argv) {
	cout<<"Cantidad de elementos: ";
	cin>>n;
	vector=new int(n);
	for(i=0;i<n;i++)
	{	cout<<"Valor posicion "<<i<<":";
		cin>>vector[i];
	}
	for(i=0;i<n;i++)
	{cout<<vector[i]<<"\t";
	}
	cout<<"Escribe el numero que quieres eliminar: ";
	cin>>busqueda;
	eliminarElemento(vector,busqueda);
	cout<<vector<<endl;
	
	cout<<"Fin del programa";
	
	return 0;
}
