#include <iostream>
using namespace std;

int main() {
    int temp;
    cin >> temp;

    if (temp < 0) {
        cout << "FREEZING";
    } else if (temp <= 30) {
        cout << "NORMAL";
    } else {
        cout << "HOT";
    }

    return 0;
}