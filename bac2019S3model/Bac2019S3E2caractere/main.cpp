#include <iostream>
#include <string.h>//Bac 2019 S3e2 Prima Consoana cuv1/ Prima vocala cuv 2/ ultima litera cuv 3
//=====>>>>>Ar trebui dupa ce gasesc c v sa parcurg cuvantuk pana la spatiu si sa incep urmatoru cuvant de unde am ramas +1, asta ca sa fie conform enuntului.  <<<<<=================
using namespace std;
int main()
{
    char vocale[]="aeiou",consoane[]="bcdfghjklmnpqrstvwxyz",a[101],consoanagasita=0,vocalagasita=0,ultimalitera=0;
    int i,n;
    cin.get(a,100);
    for(i=0;i<strlen(a);i++)
     {
         if(strchr(consoane,a[i]))
            consoanagasita=a[i];
       break;
     }


     for(i=0;i<strlen(a);i++)
     {
         if(strchr(vocale,a[i]))
            vocalagasita=a[i];
       break;
     }

      for(i=0;i<strlen(a);i++)
            if(i==strlen(a)-1)
              ultimalitera=a[i];

    cout<<consoanagasita<<vocalagasita<<ultimalitera<<endl;
    return 0;
}
