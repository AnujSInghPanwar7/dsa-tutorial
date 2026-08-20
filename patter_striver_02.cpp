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
    // upper half
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
    // lower half
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

void pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// Print the pattern in the function given to you.

void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            int k = i + j;
            if (k == 0)
            {
                cout << true << " ";
            }
            else if (k % 2 == 0)
            {
                cout << true << " ";
            }
            else
            {
                cout << false << " ";
            }
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
// Print the pattern in the function given to you.

void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for (int k = 2 * (n - i - 1); k > 0; k--)
        {
            cout << " ";
        }
        for (int l = i + 1; l > 0; l--)
        {
            cout << l;
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// Print the pattern in the function given to you.

void pattern13(int n)
{
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// A
// AB
// ABC
// ABCD
// ABCDE
// Print the pattern in the function given to you.

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        char alpha = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << alpha << " ";
            alpha++;
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// ABCDE
// ABCD
// ABC
// AB
// A
// Print the pattern in the function given to you.

void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        char alpha = 'A';
        for (int j = n - i; j > 0; j--)
        {
            cout << alpha;
            alpha++;
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// A
// BB
// CCC
// DDDD
// EEEEE
// Print the pattern in the function given to you.

void pattern16(int n)
{
    char letter = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << letter;
        }
        cout << endl;
        letter++;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
// Print the pattern in the function given to you.

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        char alpha = 'A';
        for (int k = 0; k < i + 1; k++)
        {
            cout << alpha;
            alpha++;
        }
        char beta = 'A';
        beta += (i - 1);
        for (int l = 0; l < i; l++)
        {
            cout << beta;
            beta--;
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// E
// D E
// C D E
// B C D E
// A B C D E
// Print the pattern in the function given to you.
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char let = 'A';
        let += n - i - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << let << " ";
            let++;
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// Print the pattern in the function given to you.
void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = n - i; l > 0; l--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 2 * (n - i - 1); k > 0; k--)
        {
            cout << " ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// Print the pattern in the function given to you.

void pattern20(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 2 * (n - i - 1); k > 0; k--)
        {
            cout << " ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = n - i; l > 0; l--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *****
// *   *
// *   *
// *   *
// *****
// Print the pattern in the function given to you.

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == (n - 1) || j == 0 || j == (n - 1))
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

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5
// Print the pattern in the function given to you.

void pattern22(int n)
{
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int layer = min(min(top, bottom), min(left, right));

            cout << n - layer << " ";
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
    pattern11(5);
    cout << endl;
    pattern12(5);
    cout << endl;
    pattern13(5);
    cout << endl;
    pattern14(5);
    cout << endl;
    pattern15(5);
    cout << endl;
    pattern16(5);
    cout << endl;
    pattern17(5);
    cout << endl;
    pattern18(5);
    cout << endl;
    pattern19(5);
    cout << endl;
    pattern20(5);
    cout << endl;
    pattern21(5);
    cout << endl;
    pattern22(5);
    cout << endl;
    return 0;
}