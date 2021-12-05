#include <iostream>
#include <string>

using namespace std;

int sign(float x) {
    if (x > 0) { return(1); }
    else if (x < 0) { return(-1); }
    else { return(0); }
}

int main() {
    cout << "Enter your number" << endl;
    float num;
    while (!(cin >> num)) {
        cout << "Try again\n";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    cout << sign(num);
    return 0;
}