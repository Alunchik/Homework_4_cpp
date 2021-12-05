#include <iostream>

using namespace std;

int main()
{
    int tabA[3][4];
    float tabB[4][2];
    int i;
    int j;
    cout << "Enter table A data" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            cin >> tabA[i][j];
        }
        cout << endl;
    }

    cout << "Enter table B data" << endl;
    for (i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> tabB[i][j];
        }
        cout << endl;
    }
    
    float tabC[3][2];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            tabC[j][i] = 0;
            for (int k = 0; k < 4; k++) {
                tabC[j][i] += (tabA[j][k] * tabB[k][i]);
            }
        }
    }
    cout << "           income        " << "comission" << endl;
    for (i = 0; i < 3; i++) {
        cout << "salesman " << i+1 << "   ";
        for (j = 0; j < 2; j++) {
            cout.setf(ios::left);
            cout.width(10);
            cout << tabC[i][j] << "   ";
        }
        cout << endl;
    }

    float mincom = tabC[1][2];
    float maxcom = 0;
    float sumcom = 0;
    for (i = 0; i < 3; i++) {
        if (tabC[i][2] > maxcom) {
            maxcom = tabC[i][1];
        }
        if (tabC[i][2] < mincom) {
            mincom = tabC[i][1];
        }
        sumcom += tabC[i][1];
    }
    cout << "Max comission is " << maxcom << endl;
    cout << "Min comission is " << mincom << endl;
    cout << "Total comission is " << sumcom << endl;

    float mininc = tabC[1][1];
    float maxinc = 0;
    float suminc = 0;
    for (i = 0; i < 3; i++) {
        if (tabC[i][1] > maxinc) {
            maxinc = tabC[i][0];
        }
        if (tabC[i][1] < mininc) {
            mininc = tabC[i][0];
        }
        suminc += tabC[i][0];
    }
    cout << "Max income is " << maxinc << endl;
    cout << "Min income is " << mininc << endl;
    cout << "Total income is " << suminc << endl;
    cout << "Total money is " << suminc + sumcom;
    }