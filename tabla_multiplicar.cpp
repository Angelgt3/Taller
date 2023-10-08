#include <iostream>
using namespace std;



int main(){
    //TABLA DE MULTIPLICAR
	
	cout<<"Ingrese el numero de la tabla que se quiera realizar"<<endl;
	int numero;
	cin>>numero;
	
	cout<<"Con ciclo While"<<endl;

    //Con While
	int i=1;
	while(i<=10){
		cout<<numero<<" * "<<i<<" = "<< numero*i<<endl;
		i=i+1;
	}
	
	cout<<"Con ciclo for"<<endl;

	//Con For
	for (int i=1; i<=10;i=i+1)
	{
		cout<<numero<<" * "<<i<<" = "<< numero*i<<endl;
	}
	return 0;
}
