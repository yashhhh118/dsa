#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cin >> password;

    if (password.length() >= 8) {
        cout << "VALID";
    } else {
        cout << "INVALID";
    }

    return 0;
}
