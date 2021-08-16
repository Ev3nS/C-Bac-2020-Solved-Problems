#include "iostream"
#include "fstream"
using namespace std;
ifstream f;
int main() {
	int item, max = 0;
	f.open("bac.txt");
	while(f >> item) {
		if(item > max) {
			max = item;
		}
	}
	f.close();
	// ATENTIE, de fiecare data cand creezi un vector sau o variabila initializeaza-l/-o cu  0.
	int frecv[max];
	for(int i = 0; i <= max; i++) {
		frecv[i] = 0;
	}
	f.open("bac.txt");
	while(f >> item) {
		frecv[item]++;
	}
	f.close();
	for (int i = max; i >= 0; i--) {
		if(frecv[i] == 2) {
			cout << i << " ";
		}
	}
	return 0;
}
