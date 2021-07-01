#include <iostream>
#include <set>

using namespace std;

void input_set(set <int> &s, int n) {

	for (int i = 0; i < n; i++) {

		int x;
		cin >> x;
		s.insert(x);

	}

}

set <int> intersect(set <int> &set1, set <int> &set2) {

	set <int> intersected_set;

	for (auto now = set1.begin(); now != set1.end(); now++) {

		if (set2.find(*now) != set2.end()) {

			intersected_set.insert(*now);

		}

	}

	return intersected_set;

}

int main() {

	int n;
	cin >> n;

	set <int> set1;
	input_set(set1, n);

	cin >> n;

	set <int> set2;
	input_set(set2, n);

	set <int> set3 = intersect(set1, set2);

	for (int element : set3) {
		cout << element << " ";
	}

	return 0;

}