//Diego Fernando Cárdenas Vargas 2191475

/* 3.Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que
muestre la diagonal principal de la matriz.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int matriz[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Ingrese el elemento ["<<i+1<<"]["<<j+1<<"] de la matriz: ";cin>>matriz[i][j];
		}
	}
		cout<<"La matriz ingresada fue:"<<endl;
	
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"La diagonal principal de la matriz es: "<<endl;
	for(int i=0;i<3;i++){
		cout<<matriz[i][i]<< " ";
		}
	system("pause");
	return 0;
}
