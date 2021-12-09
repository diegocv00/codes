//Diego Fernando Cárdenas Vargas 2191475

/* 4.Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.*/

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
	
	cout<<"La transpuesta de la matriz es: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[j][i]<<" ";
		}
		cout<<"\n";
	}
	system("pause");
	return 0;
}
