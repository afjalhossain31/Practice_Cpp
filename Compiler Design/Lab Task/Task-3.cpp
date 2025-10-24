#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int spaceCount = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (char c : sentence) {
        if (c == ' ')
            spaceCount++;
    }

    cout << "Number of spaces: " << spaceCount << endl;

    return 0;
}
