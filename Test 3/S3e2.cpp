#include "iostream"
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n][n];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if(i + j < n + 1) {
				a[i][j] = (n + 1) - i - j;
			} else if(i + j > n + 1) {
				a[i][j] = i + j - n - 1;
			} else {
				a[i][j] = 0;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
