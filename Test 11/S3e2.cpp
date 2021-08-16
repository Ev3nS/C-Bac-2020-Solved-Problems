#include "iostream"
#include "cstring"
using namespace std;

/// Nu merg folosite strlwr si strupr pe vectori
/// E.G.: strlwr(token[i]) <<  I'm sad :(
int main() {
  char str[100];
  cin.getline(str, 100);
  char *token = strtok(str, " ");
  while(token != NULL) {
    for(int i = 0; i < strlen(token); i++) {
      if(i == 0) {
        token[i] = toupper(token[i]);
        cout << token[i];
      } else {
        token[i] = tolower(token[i]);
        cout << token[i];
      }
    }
    cout << " ";
    token = strtok(NULL, " ");
  }
  return 0;
}
