#include <iostream>
using namespace std;

int main(){	
    //Matrices
	int mat[3][5]=  {
                        {1,   2,   3,   4,   5},
                        {10,  20,  30,  40,  50},
                        {100, 200, 300, 400, 500}
                    };
	
	//y
	//|
	//|
	//|______x
	
	//busco el 40
	int x=3;
	int y=1;
					
	//Se recorre cada fila
	for(int i=0;i<3;i++){
		//Se recorre cada columna
		for(int j=0;j<5;j++){
			if(j==x && y==i){
				cout<<mat[i][j]<<endl;	
			}
		}	
	}
}