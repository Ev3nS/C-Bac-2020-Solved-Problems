#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{                                                                           ///Utilizarea lib.vector ajuta la a crearea unui vector de tip string astfel a[i] echivaland cu
                                                                           /// anumite cuvinte din propozitia data. (!avem nevoie de un iterator pentru vector).
int n,b[20],i;                                                                 /// Valoarea lui n citita de la tastatura.
string usr_str,word_folosit;                                                  /// Cuvantul format dupa parcurgerea word[i].
vector<string> a;                                            /// Vector de tip string, a fiind sirul de cuvinte formate.
vector<string>::iterator contor;                   /// Contorul cuvintelor string din sir, un fel de "i".
char word[256];


cout<<"Introduceti un sir de caractere valid >>> "<<endl;
cin.getline(word,256);
int length = strlen(word);
int length2 =0;

for(int i=0;i<length;i++)                                         ///Copiem sirul de caractere in vector, in momentul intalnirii unui  spatiu salvam cuvantul
{                                                                             /// Trimitem valoarea string formata in vectorul a si curatam memoria cache a variabilei.
usr_str.push_back(word[i]);
     if(word[i] == (0x20) || i == length -1)           ///(0x20) e practic valoare lui  spatiu in sirul de caractere.
         {
           a.push_back(usr_str);                                   ///Functia push_back(str) are rolul de a trimite valoarea la finalul sirului, (coada).
           usr_str.clear();
            }
}

for(contor = a.begin(); contor<a.end(); contor++)                          ///a.begin, a.end, inceputul si sfarsitul vectorului.
      cout<<*contor<<" ";                                                                  ///este nevoie de apelare prin valoare asa ca se utilzeaza asterix "*"
cout<<"\n";

cout<<a[3];                                                               ///Ex afisarea celui de al 4 lea termen din sirul de valori tip  string  "a".

/**
for(contor = a.begin(); contor<a.end(); contor++)
    {
        word_folosit=*contor;
         b[i]=strlen(word_folosit);                                         ///Deci nici cum nu se poate salva intr-un vector normal valoarea lungimii unui string!!! WTF!?
     }
**/
}
