#include <iostream>
#include <string>
using namespace std;

int main() {
    string logEntry;
    string numericPart = "";

    cout << "Enter log entry ID: 00045600): ";
    cin >> logEntry;

    for (char c : logEntry) {
        if (isdigit(c)) numericPart += c;
    }

    if (numericPart.empty()) {
        cout << "No numeric ID found!" << endl;
        return 0;
    }

    int start = 0;
    while (start < (int)numericPart.size() && numericPart[start] == '0')
        start++;

    int end = numericPart.size() - 1;
    while (end >= start && numericPart[end] == '0')
        end--;

    string cleanedID;
    if (start <= end)
        cleanedID = numericPart.substr(start, end - start + 1);
    else
        cleanedID = "0";

    cout << "Original ID: " << logEntry << endl;
    cout << "Cleaned Transaction ID: " << cleanedID << endl;

    return 0;
}
