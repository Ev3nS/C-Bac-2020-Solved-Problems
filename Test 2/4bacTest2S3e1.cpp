#include "iostream"
using namespace std;

int fii (int n) {

  for(int i = n; i >= 1; i--) {
    for(int j = 1; j <= n; j++) {
      if(i * j == n && i > j) {
        cout << "(" << i << " " << j << ") ";
      }
    }
  }

  return 0;
}
int main() {
  int n;
  cin >> n;
  fii(n);
  return 0;
}
