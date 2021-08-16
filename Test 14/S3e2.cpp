#include "iostream"
#include "cstring"
using namespace std;

int main() {
  char str[100] = "Modul de -3,24 este 3,24 si modul de -15 este 15";
  char *token = strtok(str, " ");
  while(token != NULL) {
    for(int i = 0; i < strlen(token); i++) {
      if(!strchr("-", token[i])) {
        cout << token[i];
      }
    }
    cout << " ";
    token = strtok(NULL, " ");
  }
  return 0;
}
