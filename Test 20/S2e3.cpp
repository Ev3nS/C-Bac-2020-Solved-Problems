#include "iostream"
using namespace std;
int main() {
  char a[7][7];
  int n = 7;
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      if((i < j && i+j < n - 1) || (i > j && i+j >= n)) {
        cout << "a ";
      } else {
        cout << "b ";
      }
    }
    cout << "\n";
  }
}
