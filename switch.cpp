#include <iostream>
using namespace std;
int main() {
    char grade = 'G';
    switch(grade) {
        case 'V':
        cout <<"Excellent" <<endl;
        break;

        case'B':
        cout <<"good" <<endl;
        break;

        default:
        cout <<"not specified."  <<endl;

    }
    return 0;
}