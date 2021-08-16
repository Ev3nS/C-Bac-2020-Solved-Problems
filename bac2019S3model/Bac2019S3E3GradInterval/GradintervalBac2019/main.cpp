#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int i,n,a,frecv[101],suma=0;
prietendeinterval()
{

}

int main()
{
 while (f>>a)
     frecv[a]++;

     for(i=0;i<=100;i++)
        if(frecv[i]!=0)
         suma=suma+frecv[i];
     else
        frecv[i]=0;

}
