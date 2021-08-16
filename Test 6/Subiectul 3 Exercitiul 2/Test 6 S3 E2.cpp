#include "iostream"
#include "cstring"
using namespace std;

//Citest fiecare token si contorizez vocalele, daca nr vocale e mai mic decat
//nr de consoane atunci afiseaza token.
int main() {
  char str[]="ei au plantat tamarix ea a adus iasomie", vocale[]="aeiou";
  char *token = strtok(str, " ");
  while(token != NULL) {
    int nrVocale = 0;
    for(int i = 0; i < strlen(token); i++) {
      if(strchr(vocale, token[i]))
        nrVocale++;
    }
    if(nrVocale < strlen(token) - nrVocale) {
      cout << token << "\n";
    }
    token = strtok(NULL, " ");
  }
  return 0;
}
