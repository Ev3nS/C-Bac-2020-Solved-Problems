#include "iostream"
#include "fstream"
using namespace std;

ifstream f;
int main() {
  //contor numere fisier ce ideplinesc conditia
  f.open("bac.in");
    int contor = 0, item;
    while(f >> item) {
      if(item % 10 == 0 && item / 10 % 10 == 2) {
          contor++;
      }
    }
  f.close();

  //Citire din fisier item si adaugam in  vMax
  f.open("bac.in");
    int  i = 1, vMax[contor];
    while(f >> item) {
      if(item % 10 == 0 && item / 10 % 10 == 2) {
        vMax[i] = item;
        i++;
      }
    }
  f.close();

  //Sortare sir vMax crescator
  int len = i - 1;
  for(size_t i = 1; i <= len - 1; i++) {
    for(size_t j = i + 1; j <= len; j++) {
        if(vMax[i] > vMax[j]) {
          size_t aux = vMax[i];
          vMax[i] = vMax[j];
          vMax[j] = aux;
        }
    }
  }

  //Afisare ultimele 3 rezultate
  for(size_t i = len - 2; i <= len; i++) {
    cout << vMax[i] << " ";
  }

  return 0;
}
