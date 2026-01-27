#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[256] = {0};

    // Count frequency
    for (char c : s) {
        freq[c]++;
    }

    // Find first non-repeating
    for (char c : s) {
        if (freq[c] == 1) {
            cout << c;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
