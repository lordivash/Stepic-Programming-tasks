#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector <string> tokenize_line(string s) {

    int full_length = s.length() + 1;
    vector <string> words;
    string word = "";

    for (int i = 0; i < full_length; i++) {

        if (s[i] != ' ' && s[i] != ',' && s[i] != '-' && s[i] != '\0') {
            word += s[i];
        }
        else if (word != "") {

            words.push_back(word);
            word = "";

        }

    }

    return words;

}

int main() {

    int n;
    cin >> n >> ws;

    map <string, vector <string>> dict;

    for (int i = 0; i < n; i++) {
        
        string s;
        getline(cin, s);

        vector <string> words = tokenize_line(s);

        for (int j = 1; j < words.size(); j++) {

            dict[words[j]].push_back(words[0]);

        }

    }

    cout << dict.size() << endl;

    for (auto now : dict) {

        int size = now.second.size();

        cout << now.first << " - ";

        for (int i = 0; i < size - 1; i++) {
            cout << now.second[i] << ", ";
        }

        cout << now.second[size - 1] << endl;

    }

    return 0;
}