#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ~ input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
    int mathematics, physics, chemistry, biology, computer, percentage;

    cout << "Enter the marks in maths" << endl;
    cin >> mathematics;
    cout << "Enter the marks in phy" << endl;
    cin >> physics;
    cout << "Enter the marks in chem" << endl;
    cin >> chemistry;
    cout << "Enter the marks in bio" << endl;
    cin >> biology;
    cout << "Enter the marks in comp" << endl;
    cin >> computer;

    // ~ Calculate percentage:

    percentage = (mathematics + physics + chemistry + biology + computer) / 5;

    // ~ Grade according to the following question:

    if (percentage >= 90)
    {
        cout << "Grade A";
    }
    else if (percentage >= 80)
    {
        cout << "Grade B";
    }
    else if (percentage >= 70)
    {
        cout << "Grade C";
    }
    else if (percentage >= 60)
    {
        cout << "Grade D";
    }
    else if (percentage >= 40)
    {
        cout << "Grade E";
    }
    else
    {
        cout << "You have failed grade F";
    }

    return 0;
}