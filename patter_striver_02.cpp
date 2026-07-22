#include <iostream>
using namespace std;
// PATTERN 1
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *****
// *****
// *****
// *****
// *****
// Print the pattern in the function given to you.
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *
// **
// ***
// ****
// *****
// Print the pattern in the function given to you.
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// 1
// 12
// 123
// 1234
// 12345
// Print the pattern in the function given to you.
void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        int m = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << m;
            m++;
        }
        cout << endl;
    }
}

int main()
{
    pattern1(5);
    cout << endl;
    pattern2(5);
    cout << endl;
    pattern3(5);
}