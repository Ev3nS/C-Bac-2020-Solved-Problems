#include <iostream>             /// REZOLVARE BAC 2020 INFO S3 E3                                                                                                R: SAV SORIN
#include <fstream>             /// valori bac.txt  line1 ->  10
                                                ///                               line2 ->  8 8 8 5 5 3
using namespace std;
ifstream inFile;
int main()
{
    int n,i=0,j,a[10],c,length=0,length2=0,k=0,b[10],l=0;
    int sys_count=0;

    inFile.open("bac.txt");                              ///citire n si, sir din fisier si atribuirea sirului la a.
    inFile>>n;
    while(inFile >> c)
    {
        a[i]=c;
        i++;
    }
    inFile.close();
        length=i;                                            /// lungimea sirului.

    for(i=1;i<=n;i++)                              /// testam sirul de la 1 pana la n cu valorile sirului citit, daca numarul este unic il atribuim sirului b altfel pas.
    {
    k=0;
      for(j=0;j<length;j++)
         {
           if(i == a[j])
            k++;                                                            ///testare cu o variabila de tip FLAG.
          }

       if(k==0)
        {
        b[l]=i;
        l++;
        }
    }

    length2=l;                           /// lungimea sirului nou creat cu valori din intervalul 1 -> n.

     int schimb=0;

  for(i=0;i<=length2-2;i++)                                     /// ordonare descrescatoare.
{
    for(j=i+1;j<=length2-1;j++)
    {
        if(b[i]<b[j])
        {
        schimb=b[i];
        b[i]=b[j];
        b[j]=schimb;
        }
    }
}                                                                                       /// afisarea sirului si nr de numere ce indeplinesc conditia.

 for(l=0;l<length2;l++)
  {
     sys_count++;
    cout<<b[l]<<' ';
  }

  cout<<" >>> "<<sys_count;
}
