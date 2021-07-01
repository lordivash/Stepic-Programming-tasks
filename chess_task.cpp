#include <iostream>
#include <vector>
using namespace std;

int main(){

	int n = 8;
	vector <int> x(n);
	vector <int> y(n);

	for (int i = 0; i < n; i++) {

		cin >> x[i];
		cin >> y[i];

	}

	bool hits_found = false;

	for (int i = 0; i < n - 1; i++) {

		for (int j = i + 1; j < n; j++) {

			bool one_vertical = y[i] == y[j];
			bool one_horizontal = x[i] == x[j];
			bool one_diagonal = (x[i] + y[i]) == (x[j] + y[j]) || (x[i] - y[i]) == (x[j] - y[j]);

			if (one_vertical || one_horizontal || one_diagonal) {

				hits_found = true;
				break;

			}

		}

		if (hits_found) {

			break;

		}

	}

	if (hits_found) {

		cout << "YES";

	}
	else {

		cout << "NO";

	}

	return 0;
}
