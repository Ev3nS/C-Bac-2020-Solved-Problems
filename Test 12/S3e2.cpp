#include "iostream"
#include "cstring"
using namespace std;
//Eliminarea ultimei vocale, pt pozitie se cauta cu pointer
// si se scade din el sirul de caractere;
//In exemplul respectiv se elimina ultimul "u".
int main() {
  char str[100] = "cuvantul ritm poate fi tradus rhythm";
  char vocale[] = "aeiou";
  char *pch;
  for(int i = 0; i < strlen(vocale); i++) {
    pch = strrchr(str, vocale[i]);
  }
  int i = 0, len = pch - str;
  while(i < strlen(str)) {
    if(i != len) {
      cout << str[i];
    }
    i++;
  }
  return 0;
}
