	#include <iostream>
	using namespace std;
	void aggiungi(int prodotto,int prod[],int &d)
	{
	prod[d]=prodotto;
	d++;
	}
	void visualizza (int prod[],int d )
	{
		if(d==0)
		{
			cout<<"Array vuoto.";
		}
		else
		{
		cout<<endl<<"Gli elementi presenti nell'array sono: "<<endl<<endl;
		for(int i=0;i<d;i++)
		{
		cout<<"Posizione: "<<i+1 <<" Elemento: "<<prod[i]<<endl;			
		}
		}
	}
	int cerca(int prodotto,int prod[],int d)
	{
	for (int i=0;i<d;i++)
    {
        if (prod[i]=prodotto)
        {
            return i;  
        }
    }
	return -1;	
	}
	void cancella(bool a, int prodotto,int prod[],int d)
	{
		cout<<"Inserisci il valore da cancellare: "<<endl;
		cin>>prodotto;
	    a=false;
		for(int i=0;i<d;i++)
		{
		    if(prod[i]==prodotto)
		    {
		        prod[i]=0;
		        cout<<"Elemento cancellato con successo."<<endl;
		        a=true;
		    }
		     }
		     if(a==false)
		      cout<<"Elemento non trovato."<<endl;
		
	}
	void modifica(bool a, int prodotto,int prod[],int d)
	{
	    int pos,num;
		cout<<"Inserisci la posizione che vuoi modificare : "<<endl;
		cin>>pos;
		if(pos>d+1)
		cout<<"Posizione non valida . "<<endl;
		else
		{
		cout<<"Inserisci il valore che vuoi inserire : "<<endl;
		cin>>num;
		prod[pos-1]=num;
		cout<<"Elemento modificato . "<<endl;
		}
	}
	int main()
	
	{
		// nome,prodotto,prezzo,categoria;
		int prodotto;
		int prod[100];
		int nome[]={};
		int d=0;
		int opzione;
		bool a;
		do{
		cout<<endl<<"MENU :"<<endl;
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
		cout<<"Inserisci il numero che vuoi aggiungere : "<<endl;
	    cin>>prodotto;
		aggiungi( prodotto, prod, d);
		cout<<"Elemento aggiunto con successo."<<endl<<endl;		
		break;	
		
		case 2:
		visualizza ( prod, d );
		break;	
		
		case 3:
			{
                cout<<"Inserisci il valore da cercare: ";
                cin>>prodotto;
                int pos=cerca( prodotto, prod, d);
                if (pos==1)
                    cout<<"Elemento non trovato."<<endl;
                else
                    cout<<"Elemento trovato in posizione: "<<pos+1<<endl;
                break;
			}
		case 4:
		cancella(a,prodotto, prod, d); 
		break;	
		
		case 5:
		modifica(a,prodotto, prod, d);
		break;	
		
		case 0:
		cout<<"Uscita dal programma.";
		return 0;
		
		default:
		cout<<"Opzione non valida."<<endl;
		}
		}while(opzione!=0);
	}
		
		
