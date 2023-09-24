#include <iostream>
using namespace std;

int main()
{
    char input, output;
    int ip,op;
    do
    {
        cout << "Enter any character.(a-z or A-Z)" << endl;
        cin >> input;
        ip = input;

    } while (ip < 65|| (ip > 90 && ip < 97) || ip > 122);
    input= ip;
    if (ip > 64 && ip < 91)
        op = ip + 32;
    else if (ip > 96 && ip < 123)
        op = ip - 32;
    output = op;
    cout << output;

}
