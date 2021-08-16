#include <iostream>//BAC 2019 S3 E1 Suma Cifre Prime Numar.
using namespace std;
 int prim(int n)
{
     int i,uc=0,salvez,suma=0,l=1;
      salvez=n;
      while(salvez!=0)
  {

      uc=salvez%10;
      salvez/=10;

       for(i=2;i<=9;i++)
           if(uc%i==0)
               l++;

      if(l==2)
        suma=suma+uc;
      l=1;
  }

  return suma;
}

 int main()
{
    int n;
  cout<<"Numarul este (n>0) :";
  cin>>n;
  cout<<"Suma numerelor prime din numarul "<<n<<" este :"<<prim(n);
}


