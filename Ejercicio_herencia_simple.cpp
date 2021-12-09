/*Cree una clase padre y una clase hija con los siguientes
atributos:
Padre:-> nombre, asignatura, Notas: quiz1, quiz2, quiz3 ; // Los
quices tienen un porcentaje del 25%;
Hija: -> parciales: nota primer exámen, nota segundo exámen,
nota tercer exámen, promedio de exámenes(), nota final();// Cada
exámen tiene un porcentaje del 25%;

Realizar un programa que permita ingresar los datos de las notas y
calcular la nota final de la asignatura.*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Quices{
	public:
	string nombre_estudiante;
	string asignatura;
	float quiz1;
	float quiz2; 
	float quiz3; 
	float promedioQ;
	Quices(){};
	Quices(string Tnombre_estudiante,string Tasignatura,float Tquiz1,float Tquiz2,float Tquiz3,float TpromedioQ){
		nombre_estudiante = Tnombre_estudiante;
		asignatura = Tasignatura;
		quiz1 = Tquiz1;
		quiz2 = Tquiz2;
		quiz3 = Tquiz3;	
		promedioQ = TpromedioQ;
	}
	void promedio_quices(float quiz1,float quiz2,float quiz3){
		promedioQ = (quiz1+quiz2+quiz3)/3;
	}
};
class parciales: public Quices{
	public:
	float examen1;
	float examen2;
	float examen3;
	float promedioE;
	float nota_final;
	parciales(){};
	parciales(string Tnombre_estudiante,string Tasignatura,float Tquiz1,float Tquiz2,float Tquiz3,float TpromedioQ,float Texamen1,float Texamen2,float Texamen3,float TpromedioE,float Tnota_final){
		nombre_estudiante = Tnombre_estudiante;
		asignatura = Tasignatura;
		quiz1 = Tquiz1;
		quiz2 = Tquiz2;
		quiz3 = Tquiz3;	
		promedioQ = TpromedioQ;
		examen1 = Texamen1;
		examen2 = Texamen2;
		examen3 = Texamen3;
		promedioE = TpromedioE;
		nota_final = Tnota_final;
		
	}
	void promedio_Examenes(float examen1,float examen2,float examen3){
		promedioE = (examen1+examen2+examen3)/3;		
	}
	void notafinal(float promedioE,float promedioQ){
		nota_final = (promedioQ*.25)+(promedioE*.75);
	}
};
int main(){
	float promQ,promE;
	parciales e1("Miguel","Calculo",2,3,4,0,2,5,3,0,0);
	e1.promedio_quices(2,3,4);
	e1.promedio_Examenes(2,5,3);
	promQ = e1.promedioQ;
	promE = e1.promedioE;
    e1.notafinal(promQ,promE);
	cout<<"El promedio de quices en "<<e1.asignatura<<" de "<<e1.nombre_estudiante<< " es "<<e1.promedioQ<<" y el promedio en los examenes es "<<e1.promedioE<<" ,asi la nota final es "<<e1.nota_final<<endl;
	
	
	system("pause");
	return 0;
}
