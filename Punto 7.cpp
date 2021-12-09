//Diego Fernando C�rdenas Vargas

/*7.Recibir como entrada 20 n�meros, cada uno de los cuales debe
estar entre 10 y 100, inclusive. A medida que se lea cada n�mero,
validarlo y almacenarlo en el arreglo, s�lo si no es un duplicado 
de un n�mero ya le�do. Despu�s de leer todos los valores, mostrar 
s�lo los valores �nicos que el usuario introdujo. Prep�rese para 
el �peor caso�, en el que los 20 n�meros son diferentes.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	const int tamanio = 20;
	
	int numero;
	int numeros[tamanio];
	int i = 0;
	int j = 0;
	int centinela = 0;
	
	while(i<tamanio){
		
		cout << "Ingrese el numero " << i+1 << ": ";
		cin >> numero;
		
		if (numero >= 10 && numero <= 100){
		
			for(int n=0; n<i; n++){
				if (numeros[n]==numero){
					centinela = 1;
				}
			}
			
			if (centinela == 0){
				numeros[j++] = numero;
			}
			
			centinela = 0;
			i++;
		}
		else{
			cout << "El numero ingresado no es valido\n";
		}
	}
	cout <<"El vector de numeros no repetidos es: ";
	for(int n=0; n<j; n++){
		cout <<numeros[n] << ",";
	}
	system("pause");
	return 0;
}
