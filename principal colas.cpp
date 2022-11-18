#include <iostream>
#include "colaL.h"

using namespace std;

int main(){
	colaL co;
	int Numero,Opc=0,Salir=0, A=0;
	int Fin=-1;
	
	do{
		cout<<endl;
		cout<<"\t-----< MENU >-----"<<endl;
		cout<<"1.- Insertar Los Elementos."<<endl;
		cout<<"2.- Eliminar El Primer Elemento De La Cola."<<endl;
		cout<<"3.- Mostrar El Primer Elemento De La Cola."<<endl;
		cout<<"4.- Mostrar Todos Los Elementos De La Cola."<<endl;
		cout<<"5.- Salir Del Programa."<<endl;
		cout<<"\nSeleccione Una Opcion Del Menu: ";
		cin>>Opc;
		switch(Opc){
			case 1:
				cout<<endl;
				cout<<"Inserte Los Elementos A Continuacion."<<endl;
					try{
					if(!co.Cllena()){
    					cout<<"Inserte El "<<Numero<<":";
    					cin>>Numero;
						co.Insertar(Numero);
						cout<<"\tEl Elemento "<<Numero<<" Se Inserto Correctamente En La Cola."<<endl;
						A=A+1;	
						}
        				else{
        					cout<<"Cola Llena."<<endl;
						}}
						catch(const char * error){
							cout<<"Excepcion: "<<error;
						}
				break;
			case 2:
    			if(co.Cvacia()==1){
    				cout<<"Cola vacia"<<endl;
				}
				else{
					cout<<"El Numero: "<<co.Nfrente()<<" Se Ha Eliminado Correctamente."<<endl;
					co.Eliminar();
				}
				break;
			case 3:
				if(co.Cvacia()==1){
    				cout<<"Cola vacia"<<endl;
				}
				else{
					cout<<"Se Mustra El Primer Elemento De La Cola."<<endl;
					cout<<co.Nfrente()<<endl;
				}
				break;
			case 4:
				cout<<"Se Muestran Todos Los Elementos De La Cola."<<endl;
				if(co.Cvacia()==1){
    				cout<<"La Cola Esta Vacia"<<endl;
				}
				else{
					while(!co.Cvacia()){
						Numero=co.Eliminar();
						cout<<"\t"<<Numero<<"   ";
					}
					cout<<endl;
				}
				break;
			case 5:
				cout<<"Salio Del Programa."<<endl;
				exit(-1);
				break;
			default:
				cout<<"ERROR... Seleccione Una Opcion Correcta."<<endl;
		}
		cout<<endl;
		cout<<"Deseas Regresar Al Menu?..."<<endl;
		cout<<"Si... Presione 1."<<endl;
		cout<<"No... Presione Cualquier Otro Numero."<<endl;
		cin>>Salir;
	}while(Salir==1);
}
