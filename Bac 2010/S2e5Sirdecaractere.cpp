#include "iostream"
#include "cstring"

using namespace std;
// Strstr gaseste prima aparitie, deci daca dupa comparam sirurile
// cu sirul aux ce contine are contorizez valoare in cazul 0.

int main() {
  char str[101] = "la proiectare se are in vedere evitarea deformatiilor areolare si liniare";
  char *token;
  cout << str << "\n";

  int ok1 = 0;
  char strAre[] = "are";
  token = strtok(str, " ");
  while(token != NULL) {
    char *testStr = strstr(token, "are"); //salvam valorile are din fiecare cuv
    if(testStr && strcmp(testStr, strAre) == 0) { //daca la final e are contorizez
      cout << testStr << "(" << token << ") ";
      ok1++;
    }
    token = strtok(NULL, " ");
  }

  cout << "\n" << ok1;
  return 0;
}
