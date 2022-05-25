#include <iostream>
using namespace std;
int main()
{ double liczba10; // liczba z u³amkiem dziesiêtnym
 double ulamek;
    int m;
    int t[10]={0};
    int u[100]={0}; //na ulamek binarny
    int i=9;
cout<<"Podaj liczbe";
cin>>liczba10; //wczytanie liczby z ulamkiem
//cin>>m;
m=(int) liczba10; //pobieramy czesc calkowita
ulamek=liczba10 - m; // czesc ulamkowa
while(m>0){ //petla do czesci calkowitej
    t[i]=m%2;
    m=m/2;
    i--;}
for(int i=0; i<100; i++){ //petla dla czesci ulamkowej
    ulamek=2*ulamek;
if(ulamek>=1) {u[i]=1; ulamek=ulamek-1;}
    else u[i]=0;
}
cout<<"binarnie to:";
for(i=0;i<10;i++)cout<<t[i];
cout<<".";
for(i=0;i<100;i++)cout<<u[i];
    return 0;
}
