#include "iostream"
using namespace std;
int putere(int n, int &p, int d) {
	int i = 2; p = 99; d = 1;
	//Testez pana cand n e 1
	while(n != 1) {
		//Impar pe divizori, contorizez puterea lor
		int counter = 0;
		while(n % i == 0) {
			n /= i;
			counter++;
		}
		//Testez primalitatea numarului
		bool flag = true;
		for (int j = 2; j <= i / 2; j++) {
			if(i % j == 0) {
				flag = false;
			}
		}
		//Daca e prim si puterea este mai mica contorizez.
		if(flag) {
			if(counter >=1 && counter < p) {
				p = counter;
				d = i;
			}
		}
		//Incrementez divizorul
		i++;
	}
	return d;
}
int main() {
	int n, p, d;
	cin >> n;
	cout << putere(n, p, d);
	cout << " " << p;
	return 0;
}
