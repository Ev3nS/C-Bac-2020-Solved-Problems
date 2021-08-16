#include "iostream"
using namespace std;
int baza(int n) {
	int max = -1;
	while(n != 0) {
		if(n % 10 > max) {
			max = n % 10;
		}
		n /= 10;
	}
	return max + 1;
}
int main() {
	int n;
	cin >> n;
	cout << baza(n);
	return 0;
}
