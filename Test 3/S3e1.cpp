#include "iostream"
using namespace std;
int factori(int n, int m) {
	int i = 2, j = 2, counter = 0, it, it2;
	while(n != 1 && m != 1) {
		it = 0; it2 = 0;
		while(n % i == 0) {
			n /= i;
			it++;
		}
		while(m % j == 0) {
			m /= j;
			it2++;
		}
		if(i == j && it != 0 && it2 != 0) {
			counter++;
		}
		i++;
		j++;
	}
	return counter;
}
int main() {
	int n, m;
	cin >> n >> m;
	cout << factori(n, m);
	return 0;
}
