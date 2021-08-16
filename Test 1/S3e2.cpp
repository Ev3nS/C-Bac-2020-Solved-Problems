#include "iostream"

using namespace std;

int main() {
  int n, k;
  cout << "n:"; cin >> n;
  cout << "k:"; cin >> k;

  int V[n][n * k], contor, nr, i, j;
  for(i = 1; i <= n; i++) {
    contor = 0;
    nr = i;
    for(j = 1; j <= n * k; j++) {
      if(contor < k) {
        V[i][j] = nr;
        cout << V[i][j] << " ";
        contor++;
      } else {
        nr++;
        j--;
        contor = 0;
      }
    }
    cout << endl;
  }

  return 0;
}
