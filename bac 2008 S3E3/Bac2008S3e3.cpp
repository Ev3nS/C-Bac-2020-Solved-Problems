#include <iostream>
#include <fstream>
using namespace std;             // bac.txt >>> 3 100 40 70 25 5 80 6 3798
ifstream inFile;
  // Deobicei incrementarea la final aduce valori in plus si trebuie
  // sa scadem cu 1 pentru valori exacte.

  int main() {

  //Contorizare lungime si citire sir.
  int k = 0, Vector[1000];
  inFile.open("bac.txt");
  while (inFile >> Vector[k]) {
    k++;
  }
  inFile.close();

  // Citirea divizorului.
  int n;
  cout <<"input divisor 'n' >>> ";
  cin >> n;

  //Adaugam numerele ce indeplinesc conditia la vector iar pentru restu 0.
  bool flag = false;
  int i, OutVector[k-1], j = 0;
  for (i = 0; i < k; i++) {
    if (Vector[i] % n == 0 && Vector[i] != 0) {
        flag = true;                             // caz pentru sir dat in enunt.
        OutVector[j] = Vector[i];               // 0 100 40 70 0 0 80 0 0
        j++;
     }
    else {
        OutVector[j] = 0;
        j++;
     }
  }

  //Adaugam numerele diferite de 0 la un nou vector final.
  int SortedVector[k-1], length = 0;
  for (i = 0; i < k; i++)
    if (OutVector[i] != 0) {
        SortedVector[length] = OutVector[i];
        length++;
    }

  //Afisare rezultat.
  if (flag) {
    for (i = 0; i < length; i++) {
        cout << SortedVector[i] << " ";
    }
  }
  else {
    cout << "NU EXISTA";
  }
}
