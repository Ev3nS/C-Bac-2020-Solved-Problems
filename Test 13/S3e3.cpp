#include "iostream"
#include "fstream"
using namespace std;
ofstream of("bac.txt");
int main() {
	int x;
	cin >> x;
	while(x != 0) {
		of << x << " ";
		x /= 2;
	}
	return 0;
}
