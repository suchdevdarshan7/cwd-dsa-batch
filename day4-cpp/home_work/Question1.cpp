#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F

    int physics, chemistry, biology, maths, computer;
    int average;

    cout << "Enter your physics mark" << endl;
    cin >> physics;
    cout << "Enter your chemistry mark" << endl;
    cin >> chemistry;
    cout << "Enter your biology mark" << endl;
    cin >> biology;
    cout << "Enter your maths mark" << endl;
    cin >> maths;
    cout << "Enter your computer mark" << endl;
    cin >> computer;

    average = (physics + chemistry + biology + maths + computer) / 5;

    if (average >= 90)
    {
        cout << "Grade A";
    }
    else if (average >= 80)
    {
        cout << "Grade B";
    }
    else if (average >= 70)
    {
        cout << "Grade C";
    }
    else if (average >= 60)
    {
        cout << "Grade D";
    }
    else if (average >= 40)
    {
        cout << "Grade E";
    }
    else
    {
        cout << "Sorry unfortunately you have failed the exams!";
    }
    return 0;
}