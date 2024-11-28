#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;

    // if (a == 10)
    // {
    //     cout << "The number is equal to 10" << endl; //~ True statement
    // }
    // else
    // {
    //     cout << "The number is not equal to 10" << endl; //~ False statement
    // }

    //~ Multiple conditions : else if

    // if(a==10){
    //     cout<<"The number is 10"<<endl;
    // }else if(a==11){
    //     cout<<"The number is 11"<<endl;
    // }
    // else{
    //     cout<<"The number is neither 10 or 11"<<endl;
    // }

    int age;
    bool liscense;
    cout << "Enter the age of the person" << endl;
    cin >> age;
    cout << "Has liscenese or not" << endl;
    cin >> liscense;

    if (age >= 18)
    {
        cout << "The guy is eighteen years old and" << endl;
        if (liscense)
        {
            cout << "The person is allowed to drive the car" << endl;
        }
        else
        {
            cout << "The person is not allowed to drive the car because he has not license" << endl;
        }
    }

    return 0;
}

//! Conditional statements:
//~ if
//~ if else
//~ if elseif
//~ nested if
//~ for if