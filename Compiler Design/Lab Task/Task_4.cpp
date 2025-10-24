#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int spaceCount = 0;
    string noSpaceSentence = "";

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (char c : sentence) {
        if (c == ' ')
            spaceCount++;
        else
            noSpaceSentence += c;
    }

    cout << "Sentence after removing spaces: " << noSpaceSentence << endl;
    cout << "Number of spaces removed: " << spaceCount << endl;

    return 0;
}
