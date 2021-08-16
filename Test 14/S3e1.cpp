#include "iostream"
using namespace std;
int perechi(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= 1; j--) {
      if((i * j == n && i < j) && i % 2 != j % 2) {
        cout << "[" << i << " " << j << "] ";
      }
    }
  }
  return 0;
}
int main() {
  int n;
  cin >> n;
  perechi(n);
  return 0;
}
