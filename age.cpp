#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int windowSum = 0;

    // First window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    cout << maxSum;

    return 0;
}
