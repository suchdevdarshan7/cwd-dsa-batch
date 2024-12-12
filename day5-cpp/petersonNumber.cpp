#include <bits/stdc++.h>
using namespace std;

int factorial(int x)
{
    int fact = 1;

    if (x == 0 || x == 1)
        return 1;

    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{

    int n;
    cout << "Enter a number to check whether it is a peterson number or not ?" << endl;
    cin >> n;
    int temp = n;
    int sum = 0;

    while (temp != 0)
    {
        int last = temp % 10;
        // int factorialValue = factorial(last);
        // sum = sum + factorialValue;

        sum = sum + factorial(last);
        temp = temp / 10;
    }

    // cout << "The original value what we have is " << n << endl;
    // cout << "The value what we achieved is " << sum << endl;

    if (n == sum)
    {
        cout << "The number is a peterson number" << endl;
    }
    else
    {
        cout << "The number is not a peterson number" << endl;
    }

    return 0;
}