#include "iostream"
#include "fstream"
using namespace std;
ofstream of("bac.out");

int main() {
  int n = 9999999;
  while (n > 0) {
    if((n%10) * (n%100/10) == 72 && (n%10000000/1000000) * (n%1000000/100000) == 25) {
      if(n%100000/10000 == n%10000/1000 && n%100000/10000 == n%1000/100)
      of << n << "\n";
    }
    n--;
  }
  return 0;
}
