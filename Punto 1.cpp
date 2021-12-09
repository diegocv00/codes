//Diego Fernando Cárdenas Vargas 2191475

/* 1.Desarrolle un programa que lea de la entrada estándar un vector de enteros y 
determine el mayor elemento del vector.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int tamanio,numeroMayor=0,vector[tamanio],numero;
	
	cout<<"Ingrese la cantidad de elementos del vector: ";cin>>tamanio;
	
	for(int i=0;i<tamanio;i++){
		
		cout<<"Digite el numero para la posicion " <<i+1<< " del vector:";cin>>vector[i];
		if(vector[i]>numeroMayor){
			numeroMayor=vector[i];
		}
	}
	cout<<"El numero mayor del vector es: "<<numeroMayor<<endl;

	system("pause");
	return 0;
}
