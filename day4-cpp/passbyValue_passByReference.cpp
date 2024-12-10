#include <bits/stdc++.h>
using namespace std;

void increment(int &a)
{
    ++a;
    cout << a << endl;
}

int main()
{
    int b = 10;
    cout << "The value of b before incrementing " << b << endl;
    increment(b);
    cout << "The value of b after incrmenting " << b << endl;

    return 0;
}