#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.length() != s2.length()) {
        cout << "NO";
        return 0;
    }

    int freq[26] = {0};

    for (char c : s1) {
        freq[c - 'a']++;
    }

    for (char c : s2) {
        freq[c - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
