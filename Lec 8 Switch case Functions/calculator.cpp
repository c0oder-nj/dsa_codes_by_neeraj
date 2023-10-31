#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    char op;
    cout << "Enter the operator sign for operation\n supported only -> +,-,*,/,%: ";
    cin >> op;

    while (1)
    {

        switch (op)
        {
        case '*':
            cout << (a * b) << endl;
            exit(0);
        case '-':
            cout << (a - b) << endl;
            exit(0);
        case '+':
            cout << (a + b) << endl;
            exit(0);
        case '/':
            cout << (a / b) << endl;
            exit(0);
        case '%':
            cout << (a % b) << endl;
            exit(0);
        default:
            cout << "Wrong Operator choice choose Again" << endl;
            cin>>op;
        }
    }
    return 0;
}