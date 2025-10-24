#include <iostream>
#include <string>
using namespace std;

int main() {
    char str[100], sub[50];
    int i, j, found, pos = -1;

    cout << "Enter main string: ";
    cin >> str;

    cout << "Enter sub string: ";
    cin >> sub;

    for (i = 0; str[i] != '\0'; i++) {
        found = 1;  // Reset found for each position
        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        cout << "Sub string found at position " << pos + 1 << endl;
    } else {
        cout << "Sub string not found." << endl;
    }

    return 0;
}
