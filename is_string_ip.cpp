#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;
	getline(cin, s);
	s += '.';

	string string_number;
	bool is_valid_ip = true;
	int dots_count = 0;


	for (char c : s) {

		//Проверка является ли символ цифрой или точкой
		if (c >= '0' && c <= '9') {
			string_number += c;
		}
		else if (c == '.') {

			//Проврека что начальный символ не точка и нет двух точек подряд
			int number;
			if (string_number != "") {
				number = stoi(string_number);
			}
			else {
				is_valid_ip = false;
				break;
			}

			//Проверка валидности числа в адресе
			if (number < 0 || number > 255) {
				is_valid_ip = false;
				break;
			}

			dots_count++;

			//Проверка необходимого числа точек
			if (dots_count > 3 + 1) {
				is_valid_ip = false;
				break;
			}

			string_number = "";

		}
		else {

			is_valid_ip = false;
			break;

		}

	}

	//Проверка необходимого числа точек
	if (dots_count < 3 + 1) {
		is_valid_ip = false;
	}

	if (is_valid_ip) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}