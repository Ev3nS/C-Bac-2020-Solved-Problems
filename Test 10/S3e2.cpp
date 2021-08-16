#include "iostream"
#include "cstring"
using namespace std;
int main() {
  char str[100];
  cin.getline(str, 100);
  char *token = strtok(str, " ");
  while(token != NULL) {
      char *test = token; // memoram ultimul cuvant.
      cout << token << " ";
      token = strtok(NULL, " ");
      if(test[strlen(test)-1] == token[strlen(token)-1]) {
          cout << "succes " ;
     }
  }
  return 0;
}
