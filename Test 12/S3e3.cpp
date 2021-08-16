#include "iostream"
#include "fstream"
using namespace std;
ofstream f;
int main() {
	//Curat fisierul
	f.open("bac.out", ios::trunc );
	f.close();
	f.open("bac.out");
	int x;
	cin >> x;
	while(x != 0) {
		if(x<=10) {
			f << x << " ";
			x--;
		}	else if(x > 10 && x % 2 != 0) {
			f << x << " ";
			x--;
		} else {
			f << x << " ";
			x /= 2;
		}
	}
	f.close();
	return 0;
}
