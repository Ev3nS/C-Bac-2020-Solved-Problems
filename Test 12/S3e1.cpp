#include "iostream"
using namespace std;
int pDoi(int n) {
	int max = 0;
	for (int i = 2; i <= n; i*=2) {
		max = i;
	}
	return max;
}
int main() {
	int n;
	cin >> n;
	cout << pDoi(n);
	return 0;
}
