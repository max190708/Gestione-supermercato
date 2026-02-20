#include <iostream>
using namespace std;
void aggiungi(int prodotto,int prod[],int d)
{
int num,pos;
	cout<<"Inserisci il numero che vuoi aggiungere:"<<endl;
	cin>>num;
	cout<<"Inserisci la posizione in cui vuoi inserire un numero:"<<endl;
	cin>>pos;
	prod[pos]=num;	
}
void visualizza (int prod[],int d )
{
	
}
int cerca(int prodotto,int prod[],int d)
{
return true;	
}
void cancella(bool a, int prodotto,int prod[],int d)
{
	
}
void modifica(bool a, int prodotto,int prod[],int d)
{
	
}
int main()

{
	// nome,prodotto,prezzo,categoria;
	int prodotto;
	int prod[]={};
	int nome[]={};
	int d;
	int opzione;
	bool a;
	do{
	cout<<"MENU :"<<endl;
	cout<<"1 --- Aggiungi"<<endl;
	cout<<"2 --- Visualizza"<<endl;
	cout<<"3 --- Cerca"<<endl;
	cout<<"4 --- Cancella"<<endl;
	cout<<"5 --- Modifica"<<endl;
	cout<<"0 --- Esci"<<endl;
	cout<<"Scegli l'opzione :"<<endl;
	cin>>opzione;
	switch(opzione)
	{
	case 1:
	aggiungi( prodotto, prod, d);
	break;	
	
	case 2:
    visualizza(prod, d);
	break;	
	
	case 3:
	cerca(prodotto, prod, d);
	break;	
	
	case 4:
	cancella(a,prodotto, prod, d);
	break;	
	
	case 5:
	modifica(a,prodotto, prod, d);
	break;	
	
	}
	}while(opzione!=0);
}
	
	

