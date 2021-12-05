#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeIn() {
    ofstream f;
    f.open("C:\\Users\\Foxxy\\Desktop\\Сумма.txt"); // окрываем файл для записи
    if (f.is_open())
    {
        for (int i = 0; i < 10; i++) {
            int x;
            cin >> x;
            while (cin.fail())
            {
                cout << "Try again" << endl;
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cin >> x;
            }
            f << x << std::endl;
        }
    }
    f.close();
}

void sum() {
    ifstream f("C:\\Users\\Foxxy\\Desktop\\Сумма.txt");
    string num;
    float sum = 0;
    if (f.is_open()) {
        while (getline(f, num))
        {
            float n = stof(num);
            sum += n;
        }
    }
    f.close();
    cout << sum;
}

int main() {
    writeIn();
    sum();
    return 0;
}