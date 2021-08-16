#include <iostream>
#include <fstream>
using namespace std;

ifstream inFile;

int main() {

  inFile.open("bac");
    int testNum = -1, k = 0, maxK = 0, item;
    while (inFile >> item) {
      if (item == testNum) {
        k++;
      }
      else {
        maxK = k;
        k = 0;
        testNum = item;
      }
    }
  inFile.close();

  cout << maxK;

  return 0;
}
