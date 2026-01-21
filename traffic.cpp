#include <iostream>
using namespace std;

int main() {
    char signal;
    cin >> signal;

    if (signal == 'R') {
        cout << "STOP";
    } else if (signal == 'Y') {
        cout << "READY";
    } else if (signal == 'G') {
        cout << "GO";
    }

    return 0;
}
