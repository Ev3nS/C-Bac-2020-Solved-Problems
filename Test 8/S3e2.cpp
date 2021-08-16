#include "iostream"
#include "fstream"
using namespace std;
ifstream f("matrice.txt");
int main() {
	int n, k;
	f >> n >> k;
	int a[n][n];
	//Citire matrice din  fisier
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			f >> a[i][j];
		}
	}
	//Afisare matrice initiala
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	//Permutare stanga linia k
	int aux = a[k][1], lastPosition = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if(n % 2 == 0) {
				if(i == k && i > j) {
					a[i][j] = a[i][j + 1];
					lastPosition++;
				}
			}	else {
				if(i == k && i > j - 1) {
					a[i][j] = a[i][j + 1];
					lastPosition++;
				}
			}
		}
	}
	a[k][lastPosition] = aux;
	//Afisare matrice permutata
	cout << "\n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
