#include "iostream"
using namespace std;
//DOAR AFISARE PE ECRAN FARA MEMORARE DE TABLOU!!
//Deci practic nu iei punctajul \(^U^)/
int main() {
	int n, k;
	cin >> n >> k;
	int a[n * k][k], inc = 0;
	for (int i = 1; i <= n; i++) {
		int contor = 0;
		while(contor < k) {
			for (int j = 1 + inc; j <= n + inc; j++) {
				cout << j << " ";
			}
			cout << "\n";
			contor++;
		}
		inc++;
	}
}
