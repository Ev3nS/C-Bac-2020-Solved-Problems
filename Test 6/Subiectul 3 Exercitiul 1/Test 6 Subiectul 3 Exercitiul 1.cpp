#include "iostream"
using namespace std;

int divPrim(int n, int &p) {
  int j = 2;
  while(n != 1) {
    int counter = 0;
    while(n % j == 0) {
      counter++;
      n /= j;
    }
    if(counter) {
      p *= j;
      counter = 0;
    }
    j++;
  }
return p;
}

int main() {
  int n = 80, p = 1;
  cout << divPrim(n, p);
  return 0;
}
