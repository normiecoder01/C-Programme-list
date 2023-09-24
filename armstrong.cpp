#include <iostream>
using namespace std;

int main()
{
    int input, save, digit, value = 0, count = 0, power = 1;
    cout << "Enter any number." << endl;
    cin >> input;
    save = input;
    while (input > 0)
    {
        input = input / 10;
        count += 1;
    }
    input = save;
    while (input > 0)
    {

        digit = input % 10;
        for (int i = 1; i <= count; i++)
        {
            power *= digit;
        }
        value += power;
        power = 1;
        input = input / 10;
    }
    if (value == save)
        cout << "Its an armstrong number." << endl;
    else
        cout << "Its not an armstrong number." << endl;
}
