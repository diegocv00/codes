//Diego Fernando Cárdenas Vargas 2191475

/* 5.Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int matriz1[3][3],matriz2[3][3],matrizSuma[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Ingrese el elemento ["<<i+1<<"]["<<j+1<<"] de la primera matriz: ";cin>>matriz1[i][j];
		}
	}
	cout<<"---------------------------------------------------"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Ingrese el elemento ["<<i+1<<"]["<<j+1<<"] de la segunda matriz: ";cin>>matriz2[i][j];
		}
	}
	cout<<"La primera matriz ingresada fue: "<<endl;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
			cout<<matriz1[i][j]<< " ";
			}
			cout<<"\n";
		}
	cout<<"La segunda matriz ingresada fue: "<<endl;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
			cout<<matriz2[i][j]<<" ";
			}
			cout<<"\n";
		}
	cout<<"La suma de las matrices es :"<<endl;
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<matriz1[i][j]+matriz2[i][j]<< " ";
			}
			cout<<"\n";
		}

	system("pause");
	return 0;
}
