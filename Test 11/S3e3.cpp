#include "iostream"
#include "fstream"
using namespace std;
ifstream inFile;

int frecv[1000000];
int main() {
  int item, max = -1;
  inFile.open("bac.txt");
    while(inFile >> item) {
        frecv[item]++;
        if(item > max) {
          max = item;
        }
    }
  inFile.close();

  for(int i = 0; i <= max; i++) {
    if(frecv[i] >= 1) {
      cout << i << " " << frecv[i] << " ";
    }
  }
  return 0;
}
