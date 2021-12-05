#include <iostream>

using namespace std;

int arab(string rim) {
    int num = 0;
    int i;
    for (i = 0; i < rim.length(); i++) {
        if (rim[i] == 'I') {
            if (((i < rim.length() - 1) && (rim[i + 1] == 'I')) || (i == rim.length() - 1)) {
                num += 1;
            }
            else {
                num -= 1;
            }
        }
        else if (rim[i] == 'V') {
            num += 5;
        }
        else if (rim[i] == 'X') {
            if ((i < rim.length() - 1) && ((rim[i + 1] == 'L') || (rim[i + 1] == 'C'))) {
                num -= 10;
            }
            else {
                num += 10;
            }
        }
        else if (rim[i] == 'L') {
        num += 50;
            }
        else if (rim[i] == 'C') {
        if ((i < rim.length() - 1) && ((rim[i + 1] == 'D') || (rim[i + 1] == 'M'))) {
            num -= 100;
        }
        else {
            num += 100;
        }
        }
        else if (rim[i] == 'D') {
        num += 500;
            }
        else if (rim[i] == 'M') {
        num += 1000;
        }
    }
    return(num);
}

string toRim(int num) {
    string rim = "";
    rim.insert(rim.length(), "MMMM", 0, num / 1000);
    num = num % 1000;
    rim.insert(rim.length(), "CM", 0, 2*(num / 900));
    num = num % 900;
    rim.insert(rim.length(), "D", 0, (num / 500));
    num = num % 500;
    rim.insert(rim.length(), "CD", 0, 2 * (num / 400));
    num = num % 400;
    rim.insert(rim.length(), "CCC", 0, (num / 100));
    num = num % 100;
    rim.insert(rim.length(), "XC", 0, 2 * (num / 90));
    num = num % 90;
    rim.insert(rim.length(), "L", 0, (num / 50));
    num = num % 50;
    rim.insert(rim.length(), "XL", 0, 2 * (num / 40));
    num = num % 40;
    rim.insert(rim.length(), "XXXX", 0, (num / 10));
    num = num % 10;
    rim.insert(rim.length(), "IX", 0, 2 * (num / 9));
    num = num % 9;
    rim.insert(rim.length(), "V", 0, (num / 5));
    num = num % 5;
    rim.insert(rim.length(), "IV", 0, 2 * (num / 4));
    num = num % 4;
    rim.insert(rim.length(), "IIII", 0, (num / 1));
    return(rim);
}


int main(){
    cout << "Enter you number" << endl;
    string r;
    cin >> r;
    int num = arab(r);
    if ((num != 0) && (r == toRim(num))) {
        cout << num;
    }
    else {
        cout << "This number does not exist";
    }
}