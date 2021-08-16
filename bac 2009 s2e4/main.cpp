#include <iostream>
#include <cstring>
using namespace std;
int main()                         /// lungime para elimini mijloc
{                                        /// EX: din pictura devine picura
    char x[20], s[20];

    cin.getline(s,20);
    strcpy(x,s);
    if(strlen(s)%2 == 0)
        cout<<x;
    else
    strcpy(x+strlen(s)/2,s+strlen(s)/2+1);
    cout<<x;
}
