#include <iostream>
#include <cstdlib>
using namespace std;

class colaLineal
{
	private:
		int final;
		int frente;
		int listaCola[6];
		
	public:
	ColaLineal()
    {
        frente=0;
        final=-1;
    }	
    
    void insertar(int);
    int quitar();
    int borrarCola();
    int frenteCola();
    bool colaVacia();
    bool  colaLlena();
};
void colaLineal::insertar(int elemento)
{

if(!colaLlena())
        {
                final=final+1;
                listaCola[final]=elemento;
        }
        else
        throw "OverFlow en la cola";    
}
int colaLineal::quitar()
{
        if(!colaVacia())
        {
           return listaCola[frente++];
        }
        else
        throw "Cola vacia";
}
int colaLineal::borrarCola()
{
        frente=0;
        final=-1;
}
int colaLineal::frenteCola()
 {
       if(!colaVacia())
       {
              return listaCola[frente];       
       }
       else
          throw "Cola vacia";
    }
		
   bool colaLineal::colaVacia()
    {
        return frente>final;
    }
    bool  colaLineal::colaLlena()
    {
        return final==6-1;
    }	
	
