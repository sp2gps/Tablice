#include <ctime>			   ////////////////////////////////
#include <iostream>			  //   PODSTAWY PROGRAMOWANIA   //
#include <iomanip>			 // wykonał: Wojciech T.       //
#include <cstdlib>			////////////////////////////////

using namespace std;

void pokaz(int n, int *tab1, int *tab2, int *tab3)
{
	cout<<setw(6); cout<<"tab1"<<"  ";
    for (int i=0; i<n; ++i) cout<<tab1[i]<<setw(6);
    cout<<endl; cout<<"tab2"<<"  ";
    for (int i=0; i<n; ++i) cout<<tab2[i]<<setw(6);
    cout<<endl; cout<<"tab3"<<"  ";
    for (int i=0; i<n; ++i) cout<<tab3[i]<<setw(6);
	cout<<endl;
}

int main()
{  
	int n;
	cout<<"Ile elementow maja zawierac tablice tab1,tab2 i tab3?"<<endl;
    cin>>n;
    cout<<endl;
    srand(time(NULL));
    int *tab1=new int[n],*tab2=new int[n],*tab3=new int[n];
    for (int i=0; i<n; ++i) tab1[i] = rand()%50;
    for (int i=0; i<n; ++i) tab2[i] = rand()%50;
    for (int i=0; i<n; ++i) tab3[i] = rand()%50;
    cout<<"Utworzone tablice i wypelniono losowymi liczbami"<<endl;
	pokaz(n,tab1,tab2,tab3);
    cout<<endl;
//zapis tab3 do bufora;
	int *buf=new int[n];
    for (int i=0; i<n; ++i) 
	{
		buf[i] = tab3[i];
	}
//suma tablic tab1 i tab2 umieszczona w tab3
	cout<<"W tablicy tab3 umieszczam sume elementow z tab1 i tab2,"<<endl;
	cout<<endl;
    	for (int i=0; i<n; i++) tab3[i]=tab1[i]+tab2[i];
    pokaz(n,tab1,tab2,tab3);    
//przypisanie tablicy tab3 najwyższego elementu z tablic tab1 i tab2
	cout<<endl;
   	cout<<"Przypisuje tablicy tab3 wiekszy sposrod elementow z tab1 i tab2."<<endl;
	cout<<endl;
		  for (int i=0; i<n; i++)
        {
         if (tab1[i]>tab2[i]) tab3[i]=tab1[i];
		 else tab3[i]=tab2[i];
        }
	pokaz(n,tab1,tab2,tab3);
//przypisanie zawartosci tablicy tab1 do tab2, tab2 do tab3 i zawartosci tab3 do tab1
	cout<<endl;
   	cout<<"Przypisuje zawartosc tab1 do tab2, tab2 do tab3 i tab3 do tab1."<<endl;
	cout<<endl;
	for (int i=0; i<n; ++i)	tab3[i]=tab2[i];
	for (int i=0; i<n; ++i)	tab2[i]=tab1[i];
	for (int i=0; i<n; ++i)	tab1[i]=buf[i];
	pokaz(n,tab1,tab2,tab3); 
    return 0;
}
