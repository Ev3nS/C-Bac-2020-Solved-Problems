#include <iostream>
int dublura(int n) {
  int n_copy,n_dublura=0;
  n_copy=n;

    while (n_copy != 0) {
      if ((n_copy % 10) % 2 ==0) {
          n_dublura = n_dublura * 10 + (((n_copy % 10) * 2) % 10) * 10;
          n_copy /= 10;
       }
     else {
           n_dublura = n_dublura*10 + (n_copy % 10) * 10;
           n_copy /= 10;
          }
    }

  n_dublura /= 10;

  int n_dublura_intors = 0;

    while (n_dublura != 0) {
        n_dublura_intors = n_dublura_intors * 10 + n_dublura % 10;
        n_dublura /= 10;
    }

    if(n % 10 == 0)                                              //daca u.c. la nr initial e 0 adaugam 0
      n_dublura_intors *= 10;                                 // la nr dublat si intors.

  return n_dublura_intors;
}

int main() {
    int n;
    std::cout << "BAC SIMULARE 2020 HUNEDOARA S3 E1 ( Dublare Cifre Pare) " << std::endl;
    std::cout << "Valoare lui n >>> ";
    std::cin >> n;
    std::cout << "Noua valoare a lui n  >>> " << dublura(n);
}
