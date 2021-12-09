/*Cree al menos 3 clases hijas a partir de la definición de la clase polígono. Defina los
métodos virtuales en cada una de las clases hijas creadas y úselas dentro del main.*/
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class poligono{
	public:
	int num_lados;
	void cantidad_lados(int n){
		num_lados=n;
	}
	virtual void calcular_P()=0;
	virtual void calcular_A()=0;
};
class cuadrado :public poligono{
	public:
	float perimetro,longitud_lados,area;
	void pedir_longitud(int l){
		longitud_lados = l;
	}
	void calcular_P(){
		perimetro = 4*longitud_lados; 
	}
	void calcular_A(){
		area = longitud_lados*longitud_lados;
	}
	void imprimir(float P,float A){
		perimetro = P;
		area = A;
		cout<<"El area del cuadrado es "<<A<<" y el perimetro es "<<P<<endl;
	}
};
class circulo : public poligono{
		public:
	float perimetro,radio,area;
	void pedir_radio(int r){
		radio = r;
	}
	void calcular_P(){
		perimetro = 2*3.1416*radio; 
	}
	void calcular_A(){
		area = 3.1416*radio*radio;
	}
	void imprimir(float P,float A){
		perimetro = P;
		area = A;
		cout<<"El area del circulo es "<<A<<" y el perimetro es "<<P<<endl;
	}
};
class triangulo_equi : public poligono{
		public:
	float perimetro,base,area,altura;
	void pedir_lados(int b,int h){
		base = b;
		altura = h;
	}
	void calcular_P(){
		perimetro = 3*base; 
	}
	void calcular_A(){
		area = (base*altura)/2;
	}
	void imprimir(float P,float A){
		perimetro = P;
		area = A;
		cout<<"El area del triangulo es "<<A<<" y el perimetro es "<<P<<endl;
	}
};
int main(){
	float a,p,ac,pc,at,pt;
	cuadrado Cuadrado;
	circulo Circulo;
	triangulo_equi triangulo;
	Cuadrado.pedir_longitud(4);
	Cuadrado.calcular_A();
	Cuadrado.calcular_P();
	a = Cuadrado.area;
	p = Cuadrado.perimetro;
	Cuadrado.imprimir(p,a);
	////////////////////////////////
	Circulo.pedir_radio(4);
	Circulo.calcular_A();
	Circulo.calcular_P();
	ac = Circulo.area;
	pc = Circulo.perimetro;
	Circulo.imprimir(pc,ac);
	/////////////////////////
	triangulo.pedir_lados(4,2);
	triangulo.calcular_A();
	triangulo.calcular_P();
	at = triangulo.area;
	pt = triangulo.perimetro;
	triangulo.imprimir(pt,at);
	
	system("pause");
	return 0;
}
