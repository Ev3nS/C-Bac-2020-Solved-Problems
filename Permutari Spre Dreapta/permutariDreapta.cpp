#include <iostream>

using namespace std;

int main() {

  //Afisare Vector
  int V[5] = {-2, -3, 5, 8, 7};
  cout << "Vector initial :  ";
  for(int i = 0; i < 5; ++i) {
    cout << V[i] << " ";
  }
  //Citire nr de permutari
  int k;
  cout << "\nIntroduceti nr de permutari dreapta : ";
  cin >> k;

  //Algoritm permutari spre dreapta
  int temp;
  while(k != 0) {
    temp = V[4];
    for(int i = 4; i >= 1; --i) {
        V[i] = V[i - 1];
    }
    V[0] = temp;
    k--;
  }

  //Afisare vector permutat
  cout << "Vector dupa permutari :";
  for(int i = 0; i < 5; ++i) {
    cout << V[i] << " ";
  }

  return 0;
}
