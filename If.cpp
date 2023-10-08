#include <iostream>
using namespace std;

int main(){	

	cout<<"Ingrese un numero"<<endl;
	int opcion=0;
	cin>>opcion;
    
	//IF
	if(opcion>10 && opcion <20 ){
		cout<<"El numero esta entre 10 y 20"<<endl;
	}else if(opcion>20 && opcion <30){
		cout<<"El numero esta entre 20 y 30"<<endl;
	}else if(opcion>30 && opcion <40){
		cout<<"El numero esta entre 30 y 40"<<endl;
	}else if(!true){
		cout<<"true"<<endl;
	}
	else{
		cout<<"La condicion no se cumple"<<endl;
	}
    return 0;
}