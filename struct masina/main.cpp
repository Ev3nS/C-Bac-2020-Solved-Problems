#include <iostream>
#include <conio.h>
using namespace std;
struct parcare{
     struct Data_Curenta{
           char luna[15];
          int an;
}data;
    char marca[20];
}m;

int main()
{
cout<<"Marca masinii   >>> ";cin.getline(m.marca,20);
cout<<"Luna cumpararii >>> ";cin.getline(m.data.luna,15);
cout<<"Anul cumpararii >>> ";cin>>m.data.an;
cout<<"\n"<<"Rezultat   >>> "<<m.marca<<" "<<m.data.luna<<" "<<m.data.an;
getch();
}
