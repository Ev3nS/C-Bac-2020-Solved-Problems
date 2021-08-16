#include "iostream"
#include "fstream"
using namespace std;
ifstream f;
int max[10], frecv[10];
int main() {
	int item;
	//vectorul de frecventa a ultimelelor cifre
	f.open("bac.in");
	while(f >> item) {
		frecv[item % 10]++;
	}
	f.close();
	//daca sunt macar 2 aparitii, testez tot siru cu fiecare ultima cifra aferenta pentru a gasi maximul ce preceda unitatea respectiva.
	for (int i = 1; i <= 9; i++) {
		if(frecv[i] >= 2) {
			int maxItem = -1, contor = 0, it = 0, aparitie = 0;
			f.open("bac.in");
			while(f >> item) {
				it++;
				if(item % 10 == i) {
					aparitie++;
				}
				if(item % 10 == i && aparitie > 1 && item > maxItem) {
					maxItem = item;
					contor = it;
				}
			}
			f.close();
			cout << maxItem << " " << contor << "\n";
		}
	}
	return 0;
}
