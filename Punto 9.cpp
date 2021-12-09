//Diego Fernando Cárdenas Vargas 2191475
/*9.	Escriba un programa que reciba como entrada un número entero de cinco dígitos,
que separe ese número en sus dígitos individuales y los imprima,
cada uno separado de los demás por tres espacios*/

#include<iostream>	
#include<stdlib.h>

using namespace std;

int main(){
	
	int n,division,centenas,unidades,decenas,unidadesMil,decenasMil;
	
	cout<<"Ingrese un numero entero de cinco digitos:";cin>>n;
	
	division= n/10;
	unidades= n%10;
	decenas= (n%100)/10;
	centenas= (n%1000)/100;
	unidadesMil= (n%10000)/1000;
	decenasMil= (n%100000)/10000;
	
	cout<<"Las decenas de mil son: "<<decenasMil<<endl;
	cout<<"Las unidades de mil son: "<<unidadesMil<<endl;
	cout<<"Las centenas son: "<<centenas<<endl;
	cout<<"Las decenas son: "<<decenas<<endl;
	cout<<"Las unidades son: "<<unidades<<endl;
	
	cout<<"El numero ingresado fue: "<<n<<endl;
	
	system("pause");
	return 0;
}
