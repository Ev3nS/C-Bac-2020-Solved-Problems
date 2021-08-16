#include <iostream>
#include <fstream>
using namespace std;

ifstream f("numere25.in");
ofstream of("numere25.out");

 int main() {
    //Citire nr de numere.
    long int n;
    f >> n;

    //Citire numere din fisier.
    long int i = 1, a[n];
    while (f >> a[i])
       i++;

    //Testare daca numarul nu apartine sirului.
    long int  j, b[n], itterator = 1;
    bool flag;
    for (j = 1; j <= n; j++) {
        flag = false;
        for (i = 1; i <= n; i++) {
            if (a[i] == j) {
              flag = true;
            }
        }
        if (!flag) {
           b[itterator] = j;
           itterator++;
        }
    }

     //Ordonare crescatoare a numerelor.
     int aux;
     for (i = 1; j <= n - 1; j++) {
       for (j = i + 1; j <= n; j++) {
         if (b[i] > b[j]) {
             aux = b[i];
             b[i] = b[j];
             b[j] = aux;
         }
       }
     }

    //Afisare rezultate.
    if (itterator == 1)
        cout << "Nu exista";
    else
        for (i = 1; i < itterator; i++) {
          cout << b[i] << " ";
          of << b[i] << " ";
        }


    return 0;
}
