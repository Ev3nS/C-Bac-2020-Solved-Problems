#include "iostream"
#include "fstream"
using namespace std;
ifstream inFile;
//Valori de inserare pentru bac.in :
//52 10 5 20 21 0 10 60 15 3 9 20 20 5 45
//Raspunsul de pe foaia de examen la S3E3 Este gresit!
int main() {
  int item, k, secventa = 0, secventaMax = 2, counter = 1;
  inFile.open("bac.txt");
  inFile >> k;
  while(inFile >> item) {
    if(item % k == 0 || item == 0) {
      secventa++;
    } else {
      if(secventa > secventaMax) {
        secventaMax = secventa;
      }
      if (secventa >= 2) {
        counter++;
      }
      secventa = 0;
    }
  }
  inFile.close();
  cout << secventaMax << " " << counter;
  return 0;
}
