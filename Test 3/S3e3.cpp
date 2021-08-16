#include "iostream"
int foo(int n) {
	int i = 2, ok2 = 0;
	while(n != 1) {
		int ok1 = 0;
		while(n % i == 0) {
			ok1++;
			n /= i;
		}
		if(ok1 % 2 != 0) {
			ok2++;
		}
		i++;
	}
	return ok2;
}
int main() {
	int n;
	cin >> n;
	std::cout << foo(n);
	return 0;
}
