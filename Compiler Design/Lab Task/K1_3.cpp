#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    string word;
    string errorMessage = "";
    bool foundError = false;

    cout << "Enter log words (type STOP to end input):" << endl;

    while (true) {
        cin >> word;
        if (word == "STOP") break;

        if (!foundError && word.find("ERROR") != string::npos) {
            errorMessage = word;
            foundError = true;
        }
    }

    if (foundError) {
        int vowels = 0, consonants = 0;

        for (char c : errorMessage) {
            if (isalpha(c)) {
                if (isVowel(c))
                    vowels++;
                else
                    consonants++;
            }
        }

        cout << "First ERROR word: " << errorMessage << endl;
        cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
    } else {
        cout << "No ERROR entries found." << endl;
    }

    return 0;
}
