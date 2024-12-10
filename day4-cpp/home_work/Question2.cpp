#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, disc, root1, root2;

    cout << "Enter the values of a b and c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    disc = b * b - 4 * a * c;

    if (disc > 0)
    {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        cout << "The roots are " << root1 << root2;
    }
    else if (disc == 0)
    {
        root1 = root2 = -b / (2 * a);
        cout << "The roots are " << root1 << root2;
    }

    return 0;
}