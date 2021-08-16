#include <iostream>
#include <cstring>
using namespace std;
//INPUT: Pictura prin aceea arata o pace profunda.
//OUTPUT: Picura prin acea arta o pace profunda.

int main() {

  //Citire sir de caractere.
  char text[100];
  cin.getline(text, 100);

  //Separare pe cuvinte, daca lungimea e para tai mijloc.
  //Strlen(token) != 1 pentru afisare  "o sau a";
  char * token;
  token = strtok (text, " ");

  while (token != NULL) {
    if (strlen(token) % 2 != 0 && strlen(token) != 1) {
      strcpy(token + strlen(token) / 2, token + strlen(token) / 2 + 1);
      cout << token << " ";
    }
    else {
      cout << token << " ";
    }
    token = strtok (NULL, " ");
  }

  return 0;
}
