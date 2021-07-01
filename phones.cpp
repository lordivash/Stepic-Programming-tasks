#include <iostream>
#include <string>

using namespace std;

string format_number(string number) {

	string formatted_number = "";

	for (char c : number) {

		if (c <= '9' && c >= '0') {
			formatted_number += c;
		}

	}

	return formatted_number;

}

string extract_code(string number) {

	string code = "";

	if (number.length() == 11) {
		code = number.substr(1, 3);
	}
	else {
		code = "495";
	}

	return code;

}

string extract_number(string number) {

	string extracted_number = "";

	if (number.length() == 11) {
		extracted_number = number.substr(4, 7);
	}
	else {
		extracted_number = number;
	}

	return extracted_number;

}

int main() {

	string new_full_number;
	cin >> new_full_number;

	string numbers[3];

	for (int i = 0; i < 3; i++) {

		cin >> numbers[i];

	}

	new_full_number = format_number(new_full_number);
	string new_code = extract_code(new_full_number);
	string new_number = extract_number(new_full_number);

	for (int i = 0; i < 3; i++) {

		string full_number = numbers[i];

		full_number = format_number(full_number);
		string code = extract_code(full_number);
		string number = extract_number(full_number);

		if (code == new_code && number == new_number) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}