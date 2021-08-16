#include "iostream"
#include "cstring"
//Metoda alternativa ordonam cuvintele crescator dupa litere
//Si le comparam cu strcmp daca sunt la fel adica strcmp == 0 e anagrama.
using namespace std;

int main() {

  char str1[101], str2[101];
  cin.getline(str1, 101);
  cin.getline(str2, 101);

  //Nr. de aparitii al literelor din primul cuv in al 2 lea.
  int k = 0;
  for (int i = 0; i < strlen(str1); i++) {
    int unic = 0;
    for (int j = 0; j < strlen(str2); j++) {
      if(str1[i] == str2[j] && unic == 0) {
        k++;
        unic = 1;
      }
    }
  }

  //Nr. de aparitii al literelor din al 2 lea cuv in primul.
  int y = 0;
  for (int j = 0; j < strlen(str1); j++) {
    int unic = 0;
    for (int i = 0; i < strlen(str2); i++) {
      if(str1[i] == str2[j] && unic == 0) {
        y++;
        unic = 1;
      }
    }
  }

  //Daca s-au gasit aceleasi litere, este anagrama, daca nu sau  lungimea e diferta nu este.
  if(k == y) {
     cout << "Cuvantul '" << str1 << "' este anagrama a cuvantului '" << str2 << "'.";
  } else {
    cout << "NU este anagrama!";
  }

  return 0;
}
