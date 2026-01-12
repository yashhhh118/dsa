#include <iostream>
using namespace std;
int main() {
    int marks =78;
    if (marks < 25 ) {
        cout << "Grade: F" << endl;
    } else if (marks >= 25 && marks <=44){
        cout << "greade: E"<< endl;    
    } else if (marks >= 45 && marks <=49){
        cout <<"greade:D" << endl;
    } else if (marks >= 50 && marks <=59){
        cout <<"greade: c"<< endl;
    } else if (marks >= 60 && marks <=79){
        cout <<"greade: b"<< endl;
    } else if (marks >= 70) {
        cout <<"greade: a"<< endl;
    }
    return 0;

}