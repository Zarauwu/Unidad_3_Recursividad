#include <iostream>
#include "ColaLineal.h"
using namespace std;
typedef int TipoDeDato;
int main()
{
	ColaLineal cola;
    TipoDeDato x;
    int opc=1;
    const TipoDeDato fin=-1;
    do{
    cout<<"Cola"<<endl;
    cout<<"1.Insertar elemento"<<endl;
    cout<<"2.Eliminar elemento"<<endl;
    cout<<"3.Mostrar elemento de la cima"<<endl;
    cout<<"4.mostrar cola"<<endl;
    cout<<"5.salir"<<endl;
    cin>>opc;
    
    switch(opc){
    	case 1:if(cola.colaLlena()){
    		cout<<"No hay espacio en la cola"<<endl;	
		}else{
			cin>>x;
    		cola.insertar(x);
		}
		system("pause");
		break;
		case 2:if(cola.colaVacia()){
			cout<<"No hay elementos para quitar"<<endl;
			
		}else{
			cout<<"Se elimino "<<cola.quitar()<<endl;
		}
		system("pause");
		break;
		case 3:if(cola.colaVacia()){
			cout<<"No hay elementos para mostrar"<<endl;
		}else{
			x=cola.frenteCola();
			cout<<"Al frente esta "<<x<<endl;
			system("pause");;
		}
		break;
		case 4:
			while(!cola.colaVacia()){
				x=cola.quitar();
				cout<<x<<" ";
			}
			cout<<endl;
			system("pause");
			break;
		case 5: 
		cout<<"Adios"<<endl;
		system("pause");
	}
	system("cls");
	}while(opc!=5);}
    
    switch(opc!)
	{
    	case 1:if(cola.colaLlena()){
    		cout<<"No hay espacio en la cola"<<endl;
    		system("pause");
			
		}else{
			cin>>x;
    		cola.insertar(x);
    		
		}
		break;
		case 2:if(cola.colaVacia()){
			cout<<"No hay elementos para quitar"<<endl;
			
			break;
		}else{
			cout<<"Se elimino "<<cola.quitar()<<endl;
			break;
		}
		break;
		case 3:if(cola.colaVacia()){
			cout<<"No hay elementos para mostrar"<<endl;
			
			break;
		}else{
			x=cola.frenteCola();
			cout<<"Al frente esta "<<x<<endl;
			system("pause");
			break;
		}
		case 4:
			while(!cola.colaVacia()){
				x=cola.quitar();
				cout<<x<<" ";
			}
			cout<<endl;
		case 5: 
		cout<<"Adios"<<endl;	
		}
	}while(!opc==5);
	
	system("pause");
}

