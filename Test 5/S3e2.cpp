#include "iostream"
#include "cstring"
using namespace std;

int main() {
//  char str[] = "grus leucogeranu sare 1,40 m inaltime si traieste intre 30 si 40 de ani";
  char str[101];
  cin.getline(str, 101);
  char *token = strtok(str, " ");
  int count = 0;

  //Daca tokenul este numar testam toate cifrele, daca gaseste virgula nu il contorizeaza.
  while(token != NULL) {
    if(isdigit(token[0])) {
      bool flag = true;
      for(int i = 0; i < strlen(token); i++) {
        if(ispunct(token[i])) {
          flag = false;
        }
      }
      if(flag) {
        count++;
      }
    }
    token = strtok(NULL, " ");
  }

  cout << count;
  return 0;
}
