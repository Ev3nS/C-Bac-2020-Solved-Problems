#include <iostream>
using namespace std;

int perfect(int a, int b) {

  int s;
  for (int i = a; i <= b; i++) {
    s = 0;
    for (int j = 1; j <= i / 2; j++) {
        if (i % j == 0) {
          s += j;
        }
    }
    if (s == i) {
      cout << i << " ";
    }
  }

  return 0;
}

int main() {

  int a, b;
  cin >> a >> b;
  perfect(a, b);

  return 0;
}
