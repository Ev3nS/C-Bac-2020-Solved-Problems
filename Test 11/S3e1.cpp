#include "iostream"
using namespace std;

int patrate(int x, int y) {
  int suma = 0;
  for(int i = 2; i <= y; i++) {
    if(i*i >= x && i*i <= y) {
      cout << i*i;
      if((i+1)*(i+1) >= x && (i+1)*(i+1) <= y) {
        cout << "+";
      }
      suma += i*i;
    }
  }
  cout << "=" << suma;
  return 0;
}

int main() {
  int x, y;
  cin >> x >> y;
  patrate(x, y);
  return 0;
}
