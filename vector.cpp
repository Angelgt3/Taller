#include <iostream>
using namespace std;

int main(){	
    //Vector
    /*
        pos   0  1   2   3
            [ a, b , c , d ]
        tam ---------------> 4 
    */


    string vec[2] = {"hola","mundo"};
	cout<<vec[0]<<" "<<vec[1]<<endl;
	

	int vect[10]; 
	
	for(int i=0;i<10;i=i+1){
		vect[i]=i*10;
	}
	
	for(int i=0;i<10;i=i+1){
		cout<<"vect["<<i<<"] = "<<vect[i]<<endl;
	}

	/*
    // Ejemplo array
	    Se pedira un producto 
	    Se pedira la cantidad
        No se termine el programa
	*/  
	bool salir =false;
	do{
		string productos[6]   = {"Azucar","Pan","Leche","Maiz","Frijol","Arroz"};
		int precio_producto[6] = {   15,     10,    5,      25,     35,      45};
		
		cout<<"Ingrese el producto que desea"<<endl;
		string producto;
		cin>>producto;
		cout<<"Ingrese la cantidad del producto"<<endl;
		int cantidad;
		cin>>cantidad;
		
		float precio_total=0;
		for(int i=0;i<6;i++)
		{
			if(producto == productos[i]){ //Encuentra el producto que se busca
				precio_total=precio_producto[i]*cantidad;
				break; //Se sale del ciclo al encontrarlo
			}
		}
		if(precio_total==0){
            cout<<"No se encontro el producto "<<endl;   
        }else{
            cout<<"El precio total a pagar es: "<<precio_total<<endl;
        }
		
		cout<<"Quiere salirse del programa (y/f)"<<endl;
		string respuesta;
		cin >>respuesta;
		if(respuesta=="y")
		{
			salir=true;
		}else{
			salir=false;
		}
		
	}
	while(!salir);
	cout<<"Se termino"<<endl;

}