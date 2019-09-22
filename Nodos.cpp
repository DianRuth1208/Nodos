#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct nodo {
	int valor;
	struct nodo *puntero;
};


//Definir funciones 
void menu();
void agregar(nodo*&, int);
void imprimir(nodo*);

int op, valor;
nodo*lista=NULL;

//INICIO 
int main ()
{
	menu();
	return 0;
}
	
//Funcion del menu
void menu(){
	
	do
	{
		cout<<"\n\t>>Menu<<\t\n";
		cout<<"1. Agregar nodo\n";
		cout<<"2. Imprimir nodo\n";
		cout<<"3. Salir\n";
		cout<<"Elije una opcion: ";
		cin>>op;
		
		switch(op)
		{
			case 1:
				cout<<"\nIngresa un valor: ";
				cin>>valor;
				agregar(lista, valor);
				cout<<"Se guardo el valor correctamente\n"<<endl;
				system("pause");
			break;
			case 2:
				cout<<"\nEl valor guarado es: ";
				imprimir(lista);
				cout<<endl;
				system("pause");
			break;
		}
			
		//system("cls");
	}while (op!=3);
}


//Funcion agregar nodos
void agregar(nodo*&lista, int dat)
{
	nodo*nuevoNod=new nodo();
	nuevoNod->valor=dat;
	nodo*aux1=lista;
	nodo*aux2;
	while ( (aux1!= NULL) && (aux1->valor<dat) )
	{
		aux2=aux1;
		aux1=aux1->puntero;
	}
		if (lista==aux1)
		{
			lista=nuevoNod;
		}
		else{
			aux2->puntero=nuevoNod;
		}
	nuevoNod->puntero=aux1;
}



//Funcion imprimir nodos
void imprimir(nodo*lista)
{
	nodo*ac=new nodo();
	ac=lista;
	while (ac!= NULL)
	{
		cout<<"->"<<ac->valor;
		ac=ac->puntero;
	}
}

