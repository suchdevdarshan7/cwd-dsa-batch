#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to check whether the number is automorphic or not " << endl;
    cin >> n;
    long long int square = n * n;

    //    ~ 123456

    int last_Numbers = square % 100;
    cout << square;

    // cout << "The last numbers are " << last_Numbers << endl;
    cout << "The actual number is " << n << endl;

    return 0;
}