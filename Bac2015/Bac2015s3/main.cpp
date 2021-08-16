#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");
int frecv[101], a, i, j = -1, ok, ok2;

int main()
{
    while (f >> a)
	    frecv[a]++;

    for (i = 0; i <= 100; i++)
    {
	    if (!(frecv[i]))
	        ok++;
	    else
	    {
	        if (ok >= 1 && j != -1)
	        {
		        cout << j << " " << i << '\n';
		        ok2++;
		        j = i;
		        ok = 0;
	        }
            else
            {
		        j = i;
		        ok = 0;
	        }
        }
    }

    if (ok2 == 0)
	    cout << "Nu exista";

    f.close();
    return 0;
}
