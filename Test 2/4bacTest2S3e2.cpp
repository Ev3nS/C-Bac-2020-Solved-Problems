#include "iostream"
#include "cstring"

using namespace std;

int main() {
  char str[] = "2,7 minus 3,5 minus 2 egal 2,7 plus -3,5 plus -2 egal -0,2 rezultat";
  char *token = strtok(str, " ");
  while(token != NULL) {
    if(isdigit(token[0]) || isalpha(token[0])) {
      cout << token << " ";
    }
    token = strtok(NULL, " ");
  }

  return 0;
}
