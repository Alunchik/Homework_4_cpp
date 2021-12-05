#include <iostream>

using namespace std;

float floatEnter() {
    float x;
    cin >> x;
    while (cin.fail())
    {
        cout << "This is not a number, try again" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> x;
    }
    return(x);
}

float circle(float r)
{
    float pi = 3.14159;
    float S = pi * pow(r, 2);
    return(S);
}

float triangle(float h, float a)
{
    float S = h * a / 2;
    return (S);
}


float square(float a)
{
    float S = a * a;
    return(S);
}

int main()
{
    int figure;
    cout << "Choose a figure" << endl << "1-circle" << endl << "2-square" << endl << "3-triangle" << endl;
    cin >> figure;
    while (figure != 1 && figure != 2 && figure != 3) {
        cout << "Try again, be careful" << endl;
        cin >> figure;
    }
    cout << "Great choice!" << endl;
    if (figure == 1)
    {
        float r;
        cout << "Enter radius" << endl;
        r = floatEnter();
        cout << circle(r);
    }
    else if (figure == 2)
    {
        float a;
        cout << "Enter storonu" << endl;
        a = floatEnter();
        cout << square(a);
    }
    else if (figure == 3)
    {
        float h;
        float a;
        cout << "Enter high and osnovanie" << endl;
        h = floatEnter();
        a = floatEnter();
        cout << triangle(h, a);
    }
}