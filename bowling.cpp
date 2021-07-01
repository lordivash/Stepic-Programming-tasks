#include <iostream>
#include <vector>
using namespace std;

int main(){

	int n, k, l, r;
	cin >> n >> k;

	vector <bool> skittles(n);

	for (int i = 0; i < n; i++) {

		skittles[i] = true;

	}

	for (int i = 0; i < n; i++) {

		cout << "I";

	}

	cout << endl;

	for (int i = 0; i < k; i++) {

		cin >> l >> r;

		for (int i = l - 1; i < r; i++) {

			skittles[i] = false;

		}

		for (int i = 0; i < n; i++) {

			if (skittles[i]) {
				cout << "I";
			}
			else {
				cout << ".";
			}

		}

		cout << endl;

	}

	return 0;
}
