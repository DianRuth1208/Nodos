#include <iostream>
using namespace std;
struct Nodo{
	int valor;
	struct Nodo *Ptr;
};

	void agregar(struct Nodo*&iniciolista,int valor);
	void imprimir(struct Nodo*&iniciolista);
	
int main(){	
	struct Nodo *inicio;
	struct Nodo *aux;
	int opcion;
	int menu;
	int valor;
	Nodo *Ptr;
	cout<<"\elige una opcion\n\n";
	cout<<"1.- Agregar\n";
	cout<<"2.-Imprimir\n";
	cout<<"3.-Salir\n";
	
	cin>>opcion;
    do{
  	switch(opcion){
		case 1:
			cout<<"Agrgar un nuevo nodo"<<endl;
			cin>>valor;
			agregar(inicio,valor);
		break;
		case 2:
			cout<<"Imprimir valores "<<endl;
			while (Nodo!=Ptr){
				cout<<"imprimir"<<endl;
				cin>>valor;
				cout<<endl;
			}
		break ;
		case 3:
			cout<<"salir "<<endl;
			break;
			default: 
			cout<<endl;
			cout<<"error"<<endl;		
	}
	
	
	}while (opcion!=3);
	return 0;
	
}



void agregar(struct Nodo*&iniciolista,int valor){
	struct Nodo *aux;
	struct Nodo *aux2;
	aux->valor=valor;
	aux->Ptr=NULL;
	
	aux2=iniciolista;

	if(iniciolista==NULL){
		iniciolista=aux;
		
}else{

	while(aux2==NULL){
		aux2=aux2->Ptr;
		aux->valor;
		
	};
	

	
	
}
	}
		
void imprimirlista(struct Nodo*&iniciolista){
	struct Nodo*aux;
	iniciolista=aux;
	while(aux=!NULL)
	{
	cout<<aux->valor;
	aux=aux->Ptr;
	
	}
	
}
