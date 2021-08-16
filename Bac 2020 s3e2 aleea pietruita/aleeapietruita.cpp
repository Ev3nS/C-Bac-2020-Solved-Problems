#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

  int main() {

    //citim propozitia
    char usr_word[256];
    cout << "Inserati textul >>> ";
    cin.getline(usr_word, 256);
    cout << "\n";

    //citim valoarea lui n.
    int n;
    cout << "Inserati valoarea lui n >>> ";
    cin >> n;
    cout << "\n";

    //lungimea propozitiei
    int len = strlen(usr_word);

    //creeam un vector de strings unde se vor salva cunvintele fara spatiu.
    vector<string> words;
    vector<string>::iterator it; // un fel de "i", intr-un sir normal.

    //stringul auxiliar in care memoram cuvintele pana ajungem la spatiu
    string auxString;
    int k = 0, j = 0, sirLungime[256];  // k nr. litere, j contor sir lungime.

    for (int i = 0; i < len; i++) {
        //cat timp nu e spatiu memorez
        if(usr_word[i] != (0x20)) {
          auxString.push_back(usr_word[i]);
          k++;
        }
        // la spatiu trimitem stringul in vector si il curatam, la fel si cu nr de cuvinte.
        if (usr_word[i] == (0x20) || i == len - 1) {
            words.push_back(auxString);
            auxString.clear();
            sirLungime[j] = k;
            j++;
            k = 0;
        }
    }

      //Afisare in biblioteca vector, nume.inceput > numele.sfarsit .
     // in loc de a[i] folosim asterix, cerand astfel valoarea iteratorului.
     for (it = words.begin(); it <= words.end(); it++) {
          cout << *it;
     }

     //cout << endl;
     cout << "\n";

    //Afisarea sirului de lungime al cuvintelor.
     for (int i = 0; i < j ; i++) {
          cout << sirLungime[i] << " ";
     }

    //cout << endl;
     cout << "\n";

    //Semnalarea sfarsitului programului.
    return 0;
  }
