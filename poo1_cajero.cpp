/*Realice un programa usando POO en donde cree un objeto
denominado “Cuenta Bancaria”. Este objeto debe tener como
atributos: 1) Propietario de la cuenta(public), 2) Número de cuenta
(public), 3) Saldo de la cuenta (private), 4) Clave de usuario
(private) . Y como métodos: 1) Consultar Saldo(public), 2) Modificar
Saldo(public), 3) Cambiar Clave Usuario (public), y 4)Asignar
Propietario Cuenta (public). Tenga en cuenta que para los métodos
1,3,4 se requiere pedir la clave de usuario.*/

#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Cuenta_Bancaria{
	public:
		
		long int n_cuenta;
		long int N_cuenta=123456789;
		int clave;
		
	
    void Consultar_saldo(long int saldo,long int n_cuenta,int clave,long int N_cuenta,int Clave);
    void Modificar_saldo(long int saldo,long int n_cuenta,int clave,long int N_cuenta,int Clave);
	void Cambiar_clave(long int n_cuenta,int clave,int N_cuenta,int Clave);
	private:
		long int saldo;
		int Clave;
};
void Cuenta_Bancaria::Consultar_saldo(long int saldo,long int n_cuenta,int clave,long int N_cuenta,int Clave){
	cout<<"Ingrese el numero de la cuenta: ";cin>>n_cuenta;
		if(N_cuenta==n_cuenta){
			
			cout<<"Ingrese la clave de su cuenta:";cin>>clave;

      if(clave==Clave){
        cout<<"Su saldo actual es: "<<saldo<<endl;
      }else{
        cout<<"La clave es incorrecta."<<endl;
      }
			
		}else{
			cout<<"El numero de cuenta no corresponde al del sistema."<<endl;
		}
	
}
void Cuenta_Bancaria::Modificar_saldo(long int saldo,long int n_cuenta,int clave,long int N_cuenta,int Clave){
  int opcion;
  int SaldoA,saldoR;
  cout<<"Ingrese el numero de la cuenta: ";cin>>n_cuenta;
  if(N_cuenta==n_cuenta){
			
			cout<<"Ingrese la clave de su cuenta:";cin>>clave;

      if(clave==Clave){
        cout<<"1.Agregar saldo a su cuenta"<<endl;
        cout<<"2.Retirar saldo de su cuenta"<<endl;
        cin>>opcion;
        switch(opcion){
          case 1: cout<<"Cuanto saldo desea agregar?"<<endl;
          cin>>SaldoA;
          saldo+=SaldoA;
          cout<<"Su nuevo saldo es: "<<saldo<<endl;break;
          case 2: cout<<"Cuanto saldo desea retirar?";
          cin>>SaldoA;
          if(saldo>=SaldoA){
          	saldoR=saldo-SaldoA;
            cout<<"Usted ha retirado: "<<SaldoA<<endl;
            cout<<"Su nuevo saldo es: "<<saldoR<<endl;break;
          }
          else{
            cout<<"Usted no tiene saldo suficiente."<<endl;
          }break;
          default: cout<<"Ingrese un numero valido."<<endl;
        }
      }else{
        cout<<"La clave es incorrecta."<<endl;
      }
}
}

void Cuenta_Bancaria::Cambiar_clave(long int n_cuenta,int clave,int N_cuenta,int Clave){
cout<<"Ingrese el numero de la cuenta: ";cin>>n_cuenta;
		if(N_cuenta==n_cuenta){
			
			cout<<"Ingrese la clave actual de su cuenta:";cin>>clave;
      if(clave==Clave){
        cout<<"Digite su nueva clave: "<<endl;
        cin>>Clave;

      }
      else{
        cout<<"La clave es incorrecta."<<endl;
      }
}
}

int main(){
	
  Cuenta_Bancaria cuenta_banco;
  int Opcion;
  cout<<"Ingrese el numero segun lo que desee hacer: "<<endl;
  cout<<"1.Consultar saldo de cuenta."<<endl;
  cout<<"2.Modificar saldo de cuenta."<<endl;
  cout<<"3.Modificar clave de cuenta."<<endl;
  cin>>Opcion;
	
  switch(Opcion){
    case 1: 
    cuenta_banco.Consultar_saldo(5000,cuenta_banco.n_cuenta,cuenta_banco.clave,cuenta_banco.N_cuenta,3108);
    break;
    case 2:
    cuenta_banco.Modificar_saldo(5000,cuenta_banco.n_cuenta,cuenta_banco.clave,cuenta_banco.N_cuenta,3108);
    break;
    case 3:
    cuenta_banco.Cambiar_clave(cuenta_banco.n_cuenta,cuenta_banco.clave,cuenta_banco.N_cuenta,3108);
    break;
    default: cout<<"Ingrese un numero valido."<<endl;
  }
  
	system("pause");
	return 0;
}
