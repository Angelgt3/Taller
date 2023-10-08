#include <iostream>
using namespace std;

void saludo(){
	cout<<"Hola mundo"<<endl;
}

int suma(int a, int b){
	int total= a+b;
	return total;
}


int main(){	
    
    saludo();


	cout<<"Ingrese el primer valor"<<endl;
	int a;
	cin>>a;
	cout<<"Ingrese el segundo valor"<<endl;
	int b;
	cin>>b;
	int valor_respuesta = suma(a,b);
	cout<<"valor_respuesta = "<<valor_respuesta<<endl;
	
    return 0;
}