#include <bits/stdc++.h>
using namespace std;

void StarRectangle(int length, int breadth)
{
    for (int i = 1; i <= breadth; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void NumberRectangleOne(int length, int breadth)
{
    for (int i = 1; i <= breadth; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void NumberRectangleTwo(int length, int breadth)
{
    for (int i = 1; i <= breadth; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void StarTrianglePattern(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void NumberTrianglePatternOne(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void NumberTrianglePatternTwo(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void HoleInTheCenterRectangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void InvertedTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    return 0;
}