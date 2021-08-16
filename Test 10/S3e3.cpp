#include "iostream"
#include "fstream"
#include "math.h"
using namespace std;
ifstream inFile;
int main() {
  int item, r1 = 0, r2 = 0, lastItem = 0, counter = 0;
  int counterMax = 0, rMax = 0;
  inFile.open("bac.txt");
  while(inFile >> item) {
      if(item - lastItem != r1) {
          r2 = r1;
          if(item > lastItem) {
            r1 = item - lastItem;
          }
          else {
              r1 = lastItem - item;
          }
          if(counter > counterMax) {
              counterMax = counter;
              counter = 0;
              rMax = r2;
          }
      }
      lastItem = item;
      counter += 1;
  }
  inFile.close();
  cout << rMax;
  return 0;
}
