#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	double imc=0.0;
	double datos[10][3]={{0.0,0.0,0.0},
					    {0.0,0.0,0.0},
					    {0.0,0.0,0.0},
				 	    {0.0,0.0,0.0},
				  	    {0.0,0.0,0.0},
					    {0.0,0.0,0.0},
					    {0.0,0.0,0.0},
					    {0.0,0.0,0.0},
					    {0.0,0.0,0.0}};
	cout<<"...:obtendras tu indice de masa corporal:..\n";
	cout<<"ingresa los datos pedidos\n";
	
	//Leer
	for (int i=0;i<10;i++){
		for (int j=0;j<2;j++){
			if(j==0){
				cout<<"PESO de la persona numero "<<i+1<<" ?: ";
				cin>>datos[i][j];
			}else{
				cout<<"ALTURA de la persona numero "<<i+1<<" ?: ";
				cin>>datos[i][j];
			}
		}
	}
	cout<<"-----------------------------------------------------\n";
	//operaciones
	for (int i=0;i<10;i++){
		//imc=0;
		imc=datos[i][0]/(pow(datos[i][1],2));
		datos[i][2]=imc;			
	}
	 //mostrar
	 cout<<"Peso:		Altura:			IMC:\n"; 			  
	for (int i=0;i<10;i++){
		for (int j=0;j<3;j++){	
			cout<<datos[i][j];				
		cout<<"   	    	 ";
		}
		cout<<"   \n";
	}
	system ("pause");
}//Llave final
