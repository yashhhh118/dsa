#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000], result[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> st;  // will store indices

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }

        if (st.empty()) {
            result[i] = -1;
        } else {
            result[i] = arr[st.top()];
        }

        st.push(i);
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
