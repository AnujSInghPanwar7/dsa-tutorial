#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int num = 0;
char ch = 'A';
    // Q) square patterns
    // number

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }

    // Q) square patterns
    // star

    // int n=4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    // Q) square patterns
    // Char

    for (int i = 0; i < n; i++)
    {
        char ch='A';
        for (int j = 0; j < n; j++)
        {

            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }

    // Q) square pattern
    // continuous number

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            num++;
            cout<<num<<" ";
        }
        cout<<endl;
    }

    // Q) square pattern
    // continuous character

    // char ch='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
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
            cout << num + 1 << " ";//optimise krenge to num+1 ki jagah hum direct i+1 hi print kr sakte jise hume num ko fir baar baar ++ krne ki jarurat nahi hai
        }
        num++;
        cout << endl;
    }

    // Q)triangle pattern
    // same char hoga ek line mai but har line ke saath char increase hoga 📐

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    
    // Q)triangle pattern
    // same no se start hoga ek line mai but har line mai no increase hoga 📐

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }

    //Q) reverse triangle pattern
    //same no se end hoga jo ki decrease hoga start se ek line mai but har line mai no increase hoga 📐

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}