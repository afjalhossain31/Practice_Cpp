//count no of line

#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    int lineCount = 0;

    cout << "Enter log entries (press ENTER on empty line to stop):" << endl;

    while (true) {
        getline(cin, line);
        if (line.empty()) break;
        lineCount++;
    }

    cout << "Number of log entries: " << lineCount << endl;

    return 0;
}
