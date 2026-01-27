#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int left = 0, right = n - 1;
    bool found = false;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == k) {
            found = true;
            break;
        } else if (sum < k) {
            left++;
        } else {
            right--;
        }
    }

    if (found) cout << "YES";
    else cout << "NO";

    return 0;
}
