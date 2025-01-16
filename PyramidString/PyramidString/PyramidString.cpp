#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string mirrorStr(const string& input) {
    string reversed = input;                         // Copy the input
    reverse(reversed.begin(), reversed.end());       // Reverse the copy
    return input + reversed.substr(1);              // Skip the first character of the reversed string
}

void createPyramid(const string& input) {
    for (size_t i = 0; i < input.size(); i++) {
        string currentRow = input.substr(0, i + 1);  // Get the substring from the beginning to the i-th character
        cout << string(input.size() - i, ' ')        // Add leading spaces
            << mirrorStr(currentRow) << endl;       // Print the mirrored row
    }
}

int main() {
    string input;
    cin >> input;
    createPyramid(input);
    return 0;
}
