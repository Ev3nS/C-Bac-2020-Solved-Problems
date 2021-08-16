#include "iostream"
#include "cstring"
using namespace std;
int main() {
  char str[100] = "partea intreaga a lui 5,75 este egala cu a lui 5,25 si cu a lui 5 si este 5";
  char *token = strtok(str, " ");
  while(token != NULL) {
    if(isalpha(token[0])) {
      cout << token << " ";
    } else {
      int i = 0;
      while(isdigit(token[i])) {
        cout << token[i];
        i++;
      }
      cout << " ";
    }
    token = strtok(NULL, " ");
  }
  return 0;
}
