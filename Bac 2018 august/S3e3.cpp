#include <iostream>
using namespace std;

//Interval de la n pana la primul numar neprim ce contine macar un nr prim.
int interval(int n) {

  int k = 0;
  while(true) {
    for (int i = 2; i < n / 2; i++) {
         if(n % i == 0) {
           k++;
         }
    }
    if (k == 0) {
        n++;
        return n;
    }
    k = 0;
  }
}

int main() {

  int n;
  cin >> n;

  cout << n << " --> " << interval(n);
  return 0;
}
