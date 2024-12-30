#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int arr[], int n)
{

    int i = 0;
    int j = n - 1;
    int count = 0;

    while (i <= j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {2, 5, 1, 5, 2};
    int n = sizeof(arr) / sizeof(int);

    if (checkPalindrome(arr, n))
    {
        cout << "The array is palindrome" << endl;
    }
    else
    {
        cout << "The array is not a palindrome" << endl;
    }

    return 0;
}