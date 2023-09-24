#include <iostream>
using namespace std;

int main()
{
    int len, bre;
    cout << "enter the length of your rectange";
    cin >> len;
    cout << "Enter the breadth of your rectangle";
    cin >> bre;
    for (int i = 1; i <= len; i++)
        cout << "* ";
    cout << "*";
    cout << endl;

    for (int i = 1; i <= bre; i++)
    {
        cout << "* ";
        for (int i = 1; i <= len - 1; i++)
            cout << "  ";
        cout << "*";
        cout << endl;
    }
    for (int i = 1; i <= len; i++)
        cout << "* ";
    cout << "*";
    cout << endl;
}
