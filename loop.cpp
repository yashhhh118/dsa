#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0;
    cin >> num;

    original = num;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
