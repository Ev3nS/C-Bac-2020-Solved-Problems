#include "iostream"
#include "fstream"
using namespace std;
int main() {
	int m, n;
	cout << "m = ?/ n = ?\n";
	cin >> m >> n;
	int a[m][n];
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	} 
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	int contor = 0;
	for (int i = 2; i <= m; i++) {
		bool flag = true;
		for (int j = 1; j <= n; j++) {
			if(a[j][i] == a[j][1]) {
				flag == false;
			}
		}
		if(flag) {
			contor++;
		}
	}
	cout << contor;
	return 0;
}
