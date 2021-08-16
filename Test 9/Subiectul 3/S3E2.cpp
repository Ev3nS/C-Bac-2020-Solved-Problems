#include "iostream"
#include "cstring"
using namespace std;

int main() {
  int n;
  cin >> n;
  char str[n * 20], coehizion[256]="", lastWord[20]="";
  for(int i = 1; i <= n; i++) {
    cin >> str;
    if(i != 1) {
      strcat(coehizion, " ");
    }
    strcat(coehizion, str);
    if(i == n) {
      strcpy(lastWord, str);
    }
  }
  char *token = strtok(coehizion, " ");
  while(token != NULL) {
    bool flag = true;
    for(int i = 0; i < strlen(lastWord); i++) {
      if (token[i] != lastWord[i]) {
        flag = false;
      }
    }
    if(strlen(lastWord) == strlen(token)) {
      flag = false;
    }
    if(flag) {
      cout << token << " ";
    }
    token= strtok(NULL, " ");
  }

}
