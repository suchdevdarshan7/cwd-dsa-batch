#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number1, number2;
    cin >> number1;
    cin >> number2;

    if (number1 == number2)
    {
        cout << "The numbers are equal" << endl;
    }
    else if (number1 > number2)
    {
        cout << number1 << endl;
    }
    else if (number2 > number1)
    {
        cout << number2 << endl;
    }
    else
    {
        cout << "Invalid Input cannot find the answer!" << endl;
    }
    return 0;
}