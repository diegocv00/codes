/*Se desea tener un registro de notas que facilite sacar las notas definitivas del curso. El curso tiene n número de notas y 
e número de estudiantes .
Realice un programa en C++ usando vectores/matrices, funciones y loops que realice la sigiente acción:
Ingresar n número de nombres.
Ingresar n número de notas por persona.
Función para calcular el promedio de notas(cada nota tiene el mismo valor).
Función de impresión general de notas del curso. pedir datos en el main y promedio como funcion*/
#include<iostream>	
#include<stdlib.h>


using namespace std;
int n_nombres,n_notas;
string v_nombres[100];
float m_notas[100][100];
float promedio=0,suma=0;
float media[100];
float v_promedio[100];
//Prototipo de funcion
float Pedir_datos(int n_nombres,int n_notas,string v_nombres[100],float m_notas[100][100],float media[100]);
float Promedio(int n_nombres,int n_notas,float promedio,float media[100],float m_notas[100][100],float v_promedio[100],float suma);
void Imprimir(float v_promedio[100],float n_nombres);


int main(){
	
	 Pedir_datos(n_nombres,n_notas,v_nombres,m_notas,media);
	 Promedio(n_nombres,n_notas,promedio,media,m_notas,v_promedio,suma);	
	 Imprimir(v_promedio,n_nombres);
	
	system("pause");
	return 0;
}
//Definicion de funcion
float Pedir_datos(int n_nombres,int n_notas,string v_nombres[100],float m_notas[100][100],float media[100]){
	cout<<"Ingrese el numero de nombres: "<<endl;cin>>n_nombres;
	cout<<"Ingrese el numero de notas: "<<endl;cin>>n_notas;
	for(int i=1;i<=n_nombres;i++){
		cout<<"Ingrese el nombre del estudiante "<<i<<" :"<<endl;cin>>v_nombres[i];
}
		for(int d=0;d<n_nombres;d++){
			for(int j=0;j<n_notas;j++){
				cout<<"Ingrese las notas del estudiante "<<d+1<<" :"<<endl; cin>>m_notas[d][j];
			}
		}
				for(int d=0;d<n_nombres;d++){
					for(int j=0;j<n_notas;j++){
						
						suma+=m_notas[d][j];
							}
						media[d]=suma;
						suma=0;
	}
	/*for(int l=0;l<n_nombres;l++){
		v_promedio[l]=media[l]/n_notas;
	}
	cout<<"Los promedios respectivamente son: "<<endl;
	for(int i=0;i<n_nombres;i++){
		cout<<v_promedio[i]<<endl;
	}*/
	
	return m_notas[100][100],n_notas,media[100],n_nombres;
 }
 
float Promedio(int n_nombres,int n_notas,float promedio,float media[100],float m_notas[100][100],float v_promedio[100],float suma){
		for(int l=0;l<n_nombres;l++){
		v_promedio[l]=media[l]/n_notas;
	}
	return v_promedio[100];
}

void Imprimir(float v_promedio[100],float n_notas){
	cout<<"Los promedios respectivamente son: "<<endl;
	for(int i=0;i<n_nombres;i++){
		cout<<v_promedio[i]<<endl;
	}
}
