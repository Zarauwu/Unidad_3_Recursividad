#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

int main(int argc, char *argv[]){
	int Opc=0,Salir=0,S=6,A;
	
	stack <int> pila;
	do{
		cout<<endl;
		cout<<"Programa de pilas"<<endl;
		
		cout<<"-----Menu-----"<<endl;
		cout<<"1.- Inserte Un Elemento"<<endl;
		cout<<"2.- Elimine Un Elemento"<<endl;
		cout<<"3.- Mostrar El Elemento Que Esta Al Frente"<<endl;
		cout<<"4.- Mostrar Elementos De La pila"<<endl;
		cout<<"5.- Salir"<<endl;
		cin>>Opc;
	switch(Opc){
		case 1:
			cout<<"Inserte Un Elemento"<<endl;
    		cout<<"Ingrese un numero "<<A<<":";
    		cin>>A;
			pila.push(A);
			cout<<"Elemento "<<A<<" Se Inserto el elemento"<<endl;	
			break;
		case 2:
			cout<<"El elemento insertado se elimino"<<endl;
			if(pila.empty()==1){
				cout<<"La pila Esta Vacia"<<endl;
			}else{
				
				pila.pop();
				cout<<"Se Elimino El Elemento"<<endl;
			}
			break;
		case 3:
			cout<<"Mostrar El Elemento Que Esta Al Frente"<<endl;
			if(pila.empty()==1){
				cout<<"La pila Esta Vacia"<<endl;
			}else{
				cout<<pila.top()<<endl;
			}
			break;
	
		case 4:
			cout<<"Mostrar elementos de la pila"<<endl;
			if(pila.size()>0){
			cout<<"El Tamaño Es De: "<<pila.size()<<endl;
			while(!pila.empty()){
				cout<<pila.top() <<" ";
				pila.pop();
			}
			cout<<endl;
			}
			else{
				cout<<"La pila Esta Vacia"<<endl;
			}
			break;
		case 5:
			cout<<"Salir Del Programa"<<endl;
			exit (-1);
			break;
		default: cout<<"ERROR... Seleccione Una Opcion Correcta"<<endl;
	}
	cout<<"Quiere volver Al Menu?..."<<endl;
	cout<<"Si... Presione 1"<<endl;
	cout<<"No... Presione una tecla"<<endl;
	cin>>Salir;
	}while(Salir==1);
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
