//Diego Fernando Cárdenas Vargas 2191475

/*8.	Ordenamiento de burbuja: */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	int numeros[10];
	int i,j,aux;
	
   for(int i=0;i<10;i++){
   	cout<<"Ingrese el elemento "<<i+1<< " del arreglo: ";cin>>numeros[i];
   }	

	//ALGORITMO
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(numeros[j] > numeros[j+1]){//Comparacion si el numero de la posicion j es mayor al de la posicion j+1			
				aux = numeros[j];//Si es asi, intercambio de variables
		        numeros[j] = numeros[j+1];//intercambio de variables para una proxima comparacion
				numeros[j+1] = aux;   
			}
		}
	}
	
	cout<<"Orden ascendente: ";
	for(i=0;i<10;i++){
		cout<<numeros[i]<<" ";
	}	
	system("pause");
	return 0;
}
