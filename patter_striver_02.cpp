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

// PATTERN 2
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

// PATTERN 3
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

// PATTERN 4
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// 1
// 22
// 333
// 4444
// 55555
// Print the pattern in the function given to you.
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

// PATTERN 5
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *****
// ****
// ***
// **
// *
// Print the pattern in the function given to you.
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// PATTERN 6
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// 12345
// 1234
// 123
// 12
// 1
// Print the pattern in the function given to you.
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = n - i; j >= 1; j--)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

// PATTERN 7
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//     *
//    ***
//   *****
//  *******
// *********
// Print the pattern in the function given to you.
void pattern7(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        for (int k = i - 1; k > 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *********
//  *******
//   *****
//    ***
//     *
// Print the pattern in the function given to you.
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 2 * n - 1; k > 2 * i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
// Print the pattern in the function given to you.

void pattern9(int n)
{
    //upper half
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    //lower half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 2 * n - 1; k > 2 * i; k--)
        {
            cout << "*";
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
// ****
// ***
// **
// *
// Print the pattern in the function given to you.

void pattern10(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n-i; j > 0; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1
// Print the pattern in the function given to you.

// void pattern11(int n){
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//     }
    
// }

int main()
{
    pattern1(5);
    cout << endl;
    pattern2(5);
    cout << endl;
    pattern3(5);
    pattern4(5);
    cout << endl;
    pattern5(5);
    cout << endl;
    pattern6(5);
    cout << endl;
    pattern7(5);
    cout << endl;
    pattern8(5);
    cout << endl;
    pattern9(5);
    cout << endl;
    pattern10(5);
    cout << endl;
    return 0;
}