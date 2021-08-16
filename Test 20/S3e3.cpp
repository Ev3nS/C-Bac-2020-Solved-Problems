#include "iostream"
#include "fstream"
using namespace std;
ifstream f("bac.txt");
int main() {
  int item, sumaPar = 0, sumaImpar = 0, sm_p = 0, sm_imp = 0;
  //Citire de item, se face suma max, cand se termina secventa resetam valorile
  //si se trece la secventa opusa.
  while(f >> item) {
    if(item % 2 == 0) {
      sumaPar += item;
    } else {
      if(sumaPar > sm_p) {
        sm_p = sumaPar;
        sumaPar = 0;
      } else {
        sumaPar = 0;
      }
    }
    if(item % 2 != 0) {
      sumaImpar += item;
    } else {
      if(sumaImpar > sm_imp) {
        sm_imp = sumaImpar;
        sumaImpar = 0;
      } else {
        sumaImpar = 0;
      }
    }
  }
  //Afisare suma maxima de secventa, para sau impara.
  if(sm_p > sm_imp) {
    cout << "sm_p >>> " << sm_p;
  } else {
    cout << "sm_imp >>> " << sm_imp;
  }
  return 0;
}
