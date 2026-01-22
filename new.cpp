#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num <= 1) {
        cout << "NO";
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
