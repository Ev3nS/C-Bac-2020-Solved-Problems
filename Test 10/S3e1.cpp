#include "iostream"
using namespace std;
int produs (int n, int &p) {
  int frecv[10]= {0,0,0,0,0,0,0,0,0,0};
  while(n != 0) {
    frecv[n%10]++;
    n /= 10;
  }
  for(int i = 0; i <= 9; i++) {
    if(i % 2 == 0 && frecv[i] >= 1) {
      p *= i;
    }
  }
  if(p > 1) {
    return p;
  } else {
    return -1;
  }
}
 int main() {
   int n, p = 1;
   cin >> n;
   cout << produs(n, p);
   return 0;
 }
