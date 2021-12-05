#include <iostream>

using namespace std;
void flag()
{
    int i;
    for (i = 0; i < 6; i++)
    {
        int j;
        for (j = 0; j < 8; j++)
        {
            cout << "*" << " ";
        }
        int k;
        for (k = 0; k < 20; k++)
        {
            cout << "-";
        }
        cout << endl;
    }
    for (i = 0; i < 7; i++)
    {
        int p;
        for (p = 0; p < 36; p++)
        {
            cout << "-";
        }
        cout << endl;
    }
}
int main()
{
    flag();
}
