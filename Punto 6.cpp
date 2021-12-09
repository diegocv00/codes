//Diego Fernando Cárdenas Vargas 2191475

/*6.Realice un programa que le pida al usuario ingresar el tamaño de una matriz y sus elementos. 
Después,almacene en un vector la suma por sus columnas y en otro vector la suma por sus filas.
Muestre la matriz y ambos vectores.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int matriz[100][100];
	int filasMatriz,columnasMatriz,suma;
	int vectorColumna[100],vectorFila[100];
	
	//Se piden la cantidad de filas y columnas de la matriz
	cout<<"Ingrese la cantidad de filas de la matriz: "<<endl;cin>>filasMatriz;
	cout<<"Ingrese la cantidad de columnas de la matriz: "<<endl;cin>>columnasMatriz;
	
	//Rellenando la matriz
	for(int i=0;i<filasMatriz;i++){
		for(int j=0;j<columnasMatriz;j++){
			cout<<"Ingrese el elemento ["<<i+1<<"]["<<j+1<<"] de la matriz: ";cin>>matriz[i][j];
			
		}
	}
	
	//Impresion de la matriz ingresada
	cout<<"La matriz ingresada fue: "<<endl;
		for(int i=0;i<filasMatriz;i++){
			for(int j=0;j<columnasMatriz;j++){
				cout<<matriz[i][j]<< " ";
		}	
		cout<<"\n";
	}
	
	//Ciclo para la suma de las filas de la matriz
	cout<<"El vector suma de las filas es : "<<endl;
		for(int i=0;i<filasMatriz;i++){
			suma=0;
			for(int j=0;j<columnasMatriz;j++){
				suma+=matriz[i][j];
		}
		vectorColumna[i]=suma;
	}
	//Impresion del vector suma por filas
	for(int i=0;i<columnasMatriz;i++){
		cout<<vectorColumna[i]<<endl;
	}
	
	//Ciclo para la suma de las columnas de la matriz
		cout<<"El vector suma de las columnas es : "<<endl;
		for(int j=0;j<columnasMatriz;j++){
			suma=0;
			for(int i=0;i<filasMatriz;i++){
				suma+=matriz[i][j];
		}
		vectorFila[j]=suma;
	}
	//Impresion del vector suma de las columnas
	for(int j=0;j<filasMatriz;j++){
		cout<<vectorFila[j]<<" ";
	}
	cout<<endl;

	system("pause");
	return 0;
}
