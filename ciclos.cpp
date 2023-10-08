#include <iostream>
using namespace std;

int main(){	

	// FOR | WHILE | DO-WHILE
    //SINTAXIS
	
	for (int i=0; i<5; i=i+1){ 
		cout<<"For i: "<<i<<endl;
	}
	
	int condicion=0;
	while(condicion<5){
		cout<<"While condicion: "<<condicion<<endl;
		condicion=condicion+1;
	}
	
	int cont=0;
	do{
		cout<<"DoWhile condicion: "<<cont<<endl;
		cont=cont+1;
	}
	while(cont<5);
	

    return 0;
}