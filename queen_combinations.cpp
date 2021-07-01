#include <iostream>
#include <vector>

using namespace std;

void place_queen_in_column(int n, int column_i, vector <int> &rows, int &c) {

	//попытка поставить в i строку
	for (int i = 0; i < n; ++i) {

		bool taking_hit = false;

		//проверка возможности поставить ферзя
		for (int j = 0; j < column_i; ++j) {

			if (rows[j] == i || rows[j] - j == i - column_i || rows[j] + j == i + column_i) {

				taking_hit = true;
				break;

			}

		}

		if (taking_hit) {
			continue;
		}

		//установка ферзя
		rows[column_i] = i;

		//переход к следующему столбцу или увеличение счетчика
		if (column_i < n - 1) {

			place_queen_in_column(n, column_i + 1, rows, c);

		}
		else {
			c++;
		}
	}
}

int main() {

	int n;
	cin >> n;

	int c = 0;
	vector <int> y(n, 0);

	place_queen_in_column(n, 0, y, c);

	cout << c;

	return 0;

}