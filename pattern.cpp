#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int num = 0;
    int numb = 4;

    char ch = 'A';
    // Q) square patterns
    // number

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    // Q) square patterns
    // star

    // int n=4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Q) square patterns
    // Char

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {

            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    // Q) square pattern
    // continuous number

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            num++;
            cout << num << " ";
        }
        cout << endl;
    }

    // Q) square pattern
    // continuous character

    // char ch='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    // Q) triangle pattern
    //  * 📐

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Q)triangle pattern
    // same no hoga ek line mai but har line ke saath no increase hoga 📐

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num + 1 << " "; // optimise krenge to num+1 ki jagah hum direct i+1 hi print kr sakte jise hume num ko fir baar baar ++ krne ki jarurat nahi hai
        }
        num++;
        cout << endl;
    }

    // Q)triangle pattern
    // same char hoga ek line mai but har line ke saath char increase hoga 📐

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    // Q)triangle pattern
    // same no se start hoga ek line mai but har line mai no increase hoga 📐

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    // Q) reverse triangle pattern
    // same no se end hoga jo ki decrease hoga start se ek line mai but har line mai no increase hoga 📐

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // Q) floyd's triangle pattern
    // number

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            num++;
            cout << num << " ";
        }
        cout << endl;
    }

    // Q) floyd's triangle pattern
    // character

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    // Q) inverted triangle pattern
    // number

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int k = n; k > i; k--)
        {
            cout << i + 1 << " ";
        }

        cout << endl;
    }

    // Q) inverted triangle pattern
    // character

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int k = n; k > i; k--)
        {
            cout << ch << " ";
        }
        ch++;

        cout << endl;
    }

    // Q) pyramid pattern
    // number

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i + 1; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << k + 1 << " ";
        }
        for (int l = i + 1; l > 1; l--)
        {
            cout << l - 1 << " ";
        }

        cout << endl;
    }

    // Q) hollow diamond pattern
    // diamond on ends

    for (int i = 0; i < n; i++) // outer loop
    {
        for (int j = n - i - 1; j > 0; j--) // inner loop for 1st space
        {
            cout << " ";
        }
        cout << "*";
        for (int k = 0; k < 2 * i - 1; k++) // inner loop for between space
        {
            cout << " ";
            if (k == 2 * i - 2) // taki sirf end mai aaye
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int k = n - 2 * i - 1; k > 0; k--)
        {
            cout << " ";
            if (k == 1)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}