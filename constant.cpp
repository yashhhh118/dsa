#include <iostream>
using namespace std;
int main() {
    const int x = 10;
    const int y  = 7;

    switch (x+y) {
        case 15:
        cout << "Result is 15." <<endl;
        break;

        case 20:
        cout << "result is 20" <<endl;
        break;
    default:
        cout << "no match found." <<endl;
        return 0;
    }
}