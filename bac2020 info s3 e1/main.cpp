  /*     S3 E1     BAC    INFORMATICA     MATE-INFO    2020    MODEL               R: Sorin Sav
    "d"                            >>> conform enuntului parametrul pentru nr. duplicat.
    "usr_num"              >>> variabila cu care creez numarul conform cerintei.
    "reversedNumber" >>> numarul va fii scris invers dupa rezolvare ex ==> (991102 va fii 201199).
    "k"                            >>> contor pentru numerele impare, daca nu sunt se va afisa pe ecran "-1".
*/
#include <iostream>

int duplicare(int n,int d)
{
    int usr_num=0,reversedNumber=0,k=0;
        while(n!=0 )
    {
            if((n%10)%2!=0)
             {
                usr_num = usr_num*100 +(n%10)*10 + n%10;
                k++;
                    }
            else
                usr_num =  usr_num*10 + n%10;
             n/=10;
         }

    if(k==0)
            reversedNumber=-1;
   else
         while(usr_num!=0)
    {
        reversedNumber=reversedNumber*10 + usr_num%10;
        usr_num/=10;
        }

    d=reversedNumber;
    return d;
}

int main()
{
    int n,d;
    std::cout<<"n >>>   "; std::cin>>n;
    std::cout<<"d >>>   "<<duplicare(n,d );
}

