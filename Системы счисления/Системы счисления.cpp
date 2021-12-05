#include <iostream>
#include <math.h>

using namespace std;

int intEnter() {
        int x;
        cin >> x;
        while (cin.fail())
        {
            cout << "This is not a number, try again" << endl;
            cin.clear();
            cin.ignore();
            cin >> x;
        }
        return(x);
}

int main() {
    char digits[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' }; // отсюда берем цифры

    cout << "Enter your number, its counting system and translating counting system" << endl;
    string startNumber; // число
    int startSystem; // исходная система счисления
    cin >> startNumber;
    startSystem = intEnter();

    bool numexist = true;
    for (int i = 0; i < startNumber.length(); i++) { // проверка, существует ли число в данной системе счисления
        bool digitexist = false;
        for (int j = 0; j < startSystem; j++) {
            if (startNumber[i] == digits[j]) { digitexist = true; }
        }
        if (digitexist == false) {
            numexist = false;
        }
    }
    if (numexist == false) { cout << "This number does not exist"; }
    else {
        int num10 = 0;
        int digit;
        for (int i = 0; i < startNumber.length(); i++) { // алгоритм, переводящий число в 10-ичную систему счисления
            int k = (startNumber.length() - i) - 1; //степень, в которую возводится 10 в стартовой системе счисления;
            for (int j = 0; j < startSystem; j++) { // поиск соответствующей цифры в массиве
                if (startNumber[i] == digits[j]) { digit = j; }
            }
            num10 += pow(startSystem, k) * digit;
        }
        int endSystem = intEnter();
        int l = 0;
        string endNumber ="";
        while (num10 > 0) { // перевод из десятичной системы счисления в конечную
            digit = num10 % endSystem;
            char ch = (digits[digit]);
            endNumber.insert(0, 1, ch);
            num10 /= endSystem;
            l += 1;
        }
        cout << endNumber;
    }
}