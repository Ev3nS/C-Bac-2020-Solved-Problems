#include "iostream"
using namespace std;
int generatoare(int n) {
	for (int i = 1; i <= n / 2; i++) {
		for (int j = n; j >= 1; j--) {
			if(i * j + i / j == n && i % 2 == 0) {
				cout << i << "-" << j << " ";
			}
		}
	}
	return 0;
}
int main() {
	int n;
	cin >> n;
	generatoare(n);
	return 0;
}
