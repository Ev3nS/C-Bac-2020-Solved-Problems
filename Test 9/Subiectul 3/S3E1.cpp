#include "iostream"
using namespace std;
int suma(int n, int &s) {
  int vector[10] = {0,0,0,0,0,0,0,0,0,0};
  while (n != 0) {
    if((n % 10) % 2 != 0) {
      vector[n % 10] = 1;
    }
    n /= 10;
  }
  for (int i = 1; i <= 10; i++) {
    if(vector[i] == 1) {
      s += i;
    }
  }
  return s;
}
int main() {
  int n, s = 0;
  cin >> n;
  cout << suma(n, s);
  return 0;
}
