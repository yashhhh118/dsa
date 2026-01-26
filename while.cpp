#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = 0;  // Position to place next non-zero

    // Move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill remaining positions with zeros
    while (index < n) {
        arr[index++] = 0;
    }

    // Print result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
