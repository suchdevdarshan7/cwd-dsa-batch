#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    int reverse = 0;
    // 1234 4321

    while (n > 0)
    {
        int last = n % 10;
        reverse = reverse * 10 + last;
        n = n / 10;
    }

    cout << reverse;

    return 0;
}