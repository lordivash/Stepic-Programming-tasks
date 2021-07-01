#include <iostream>
#include <string>
using namespace std;

int main(){

	int n;
	cin >> n;

	string a[15][15];

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			a[i][j] = ".";

		}

	}

	for (int i = 0; i < n; i++) {

		a[(n - 1) / 2][i] = "*";
		a[i][(n - 1) / 2] = "*";
		a[i][i] = "*";
		a[n - 1 - i][i] = "*";

	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			cout << a[i][j] << " ";

		}

		cout << endl;

	}

	return 0;
}
