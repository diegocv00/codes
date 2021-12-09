//Diego Fernando Cárdenas Vargas 2191475

/* 2.Escribe un programa que defina un vector de números y calcule si existe algún número en el 
vector cuyo valor equivale a la suma del resto de números del vector. Ejemplo: [1 2 3 4 10], el último elemento del vector
(10) es igual a la suma de los otros elementos (10=1+2+3+4).*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int vector[5]={10,2,3,4,1},suma;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i!=j){
			suma+=vector[j];
			}
		}	
		if(vector[i]==suma){
		cout<<"Si existe un elemento que es suma de los demas elementos del vector."<<endl;
		}
		suma=0;
	}	
	system("pause");
	return 0;
}
