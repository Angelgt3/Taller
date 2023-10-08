#include <iostream>
using namespace std;

int main(){	
    /*
	Operaciones relacionales
	Es igual	==    	| 10 == 5 -	> false
	Diferente 	!= 		| "aa" != "abcx" 	-> true
	Mayor que	>		| 15 > 15 	-> false
	Mayor igual >=		| 15 >= 15	-> true
	Menor que	<		| 15 < 5	-> false
	Menor igual <=		| 35<100	->true
	
	Operaciones logicos
	AND			&&  ----    1!=1 && 2!=10 -> true
	OR			||  ----	2<2 || "h"=="h" -> true
	NOT			!	----	!(1<1) 	-> true

	Operaciones Aritmetica
	Multiplicacion	*		| 10 * 5 -> 50
	Division		/		| 20 / 4 -> 5
	Suma			+		| 30 + 15 -> 45
	Resta			-       | 40 - 10 -> 30
	Modulo			%		| 26 % 12 -> 2
	*/

	//EJERCICIO
	/*
Desarrolle un programa que permita registrar la venta de productos. 
El programa debe ser capaz de recibir la información de cada producto,
incluyendo el nombre del producto, la cantidad vendida y el precio unitario.
Además, el programa debe calcular automáticamente el precio total de la venta y 
aplicar descuentos en función de la cantidad de productos comprados.

Los descuentos se aplican de la siguiente manera:
Si el precio total de la compra se encuentra entre $100 y $199.99, se aplica un descuento del 10%.
Si el precio total de la compra se encuentra entre $200 y $299.99, se aplica un descuento del 15%.
	*/

	//Se pide los valores y se guardan
	cout<<"Ingrese el nombre del producto"<<endl;
	string nombre="";
	cin>>nombre;
	cout<<"Ingrese la cantidad del producto"<<endl;
	int cant=0;
	cin>>cant;
	cout<<"Ingrese el precio del producto"<<endl;
	float precio=0;
	cin>>precio;

	//se calcula el precio total
	float precio_total = cant * precio;
	
	//Se calcula el descuento y se aplica 
	if(precio_total>=100 && precio_total<200){
		float descuento = precio_total * 0.10;
		cout<<"El decuento del 10% es :"<<descuento<<endl;
		precio_total = precio_total - descuento;
	}else if (precio_total >= 200 && precio_total<300)
	{
		float descuento = precio_total*0.15;
		cout<<"El decuento del 15% es :"<<descuento<<endl;
		precio_total = precio_total - descuento;
	}
	else{
		cout<<"No hay descuento"<<endl;
	}
	//Imprime el total a pagar
	cout<<"El total a pagar es:" <<precio_total<<endl;


    return 0;
}