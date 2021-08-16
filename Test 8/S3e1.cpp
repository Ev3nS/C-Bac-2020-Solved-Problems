#include "iostream"
using namespace std;
int suma(int n) {
	int i = 2, suma = 0;
	while(n != 1) {
		while(n % i == 0) {
			n /= i;
		}
		bool flag = true;
		for (int j = 2; j <= i / 2; j++) {
			if(i & j == 0) {
				flag = false;
			}
		}
		if(flag) {
			suma += i;
		}
		i++;
	}
	return suma;
}
int main() {
	int n;
	cin >> n;
	cout << suma(n);
	return 0;
}
