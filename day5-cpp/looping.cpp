#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ! 3

    // ~ while for do while foreach

    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << "The loop will run " << i << " times" << endl;
    // }

    // ! 1234 ==> 10

    // ! Add all the digits in the number

    int n;
    int sum = 0;

    cout << "Enter a number" << endl;
    cin >> n;

    for (; n != 0; n /= 10)
    {
        int last = n % 10;
        sum = sum + last;
    }

    cout << sum;

    return 0;
}