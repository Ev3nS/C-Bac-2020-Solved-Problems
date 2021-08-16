#include <iostream>
#include <fstream>
using namespace std;

ifstream inFile;
                                   // Putere Max a lui 2 din sir.
  int numere_in() {               // 87 99 123 128 144  199 234 512 659 780 >>> 512.
     int i=0, a[100];            // 1 2 3 4 5 6 7 8 9 >>> 8.
     inFile.open("numere.in");
     while (inFile >> a[i]) {
       i++;
     }
     inFile.close();
     int array_length = i-1, Max_PowOfTwo, j;
     for (i = 0; i < array_length; i++) {
       for (j = 2; j <= a[array_length]; j *= 2) {
         if (a[i] == j) {
            Max_PowOfTwo = a[i];
         }
       }
     }
     int pow, pow_counter=0;           // Aflarea puterii se putea face si cu un contor
     pow = Max_PowOfTwo;              // in for loop-ul puterilor lui 2, iar in momentul
     while (pow % 2 == 0) {          // gasirii unui numar ce indeplineste conditia il memoram.
     pow_counter += 1;
     pow /= 2;
     }
     cout <<"Puterea maxima a lui 2 ce apartine vectorului este >>> " << Max_PowOfTwo << " 2^" << pow_counter << "\n";
     return 0;
}

  int main() {
    numere_in();
}
