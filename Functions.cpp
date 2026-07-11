#include <iostream>
using namespace std;

// Function Declaration
void PrintHello()
{
    cout << "Hello \n";
}

// if its not void then it has to return the value
int printhello()
{
    cout << "hello \n";
    return 10;
}

// sum of two numbers
double sum(double a, double b)
{
    double s = a + b;
    return s;
}

// min of two number
int minofno(int a, int b)
{ // parameters
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// Calculate sum of number from 1 to n
int summ(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += i;
    }
    return count;
}

// Calculate n factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

// Sum of digits of a number
int SumofDigit(int n)
{
    int digitsum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int lastdigit = n%10;          //Nahi hua for se😓😓
    //     n=n/10;
    //     digitsum += lastdigit;
    // }

    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        digitsum += lastdigit;
    }

    return digitsum;
}

// Calculate ncr binomial coffiecient for n and r
int Binomial(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{

    // Function Call/Invoke

    PrintHello();

    printhello();           // this will only give us hello but if we want the value also
    int val = printhello(); // we store the value it return in val and then print it
    cout << val << endl
         << endl
         << endl;

    // there is also a way to this in single line
    cout << printhello() << endl
         << endl;

    // sum of two number
    cout << sum(10.78, 9.22) << endl
         << endl;

    // min of two number
    cout << minofno(4, 5) << endl
         << endl; // arguments

    // Calculate sum of number from 1 to n
    cout << summ(5) << endl
         << endl;

    // Calculate n factorial
    cout << factorial(5) << endl
         << endl;

    // Sum of digits of a number
    cout << SumofDigit(145) << endl
         << endl;

    // Calculate ncr binomial coffiecient for n and r
    cout << Binomial(6, 3) << endl;
    return 0;
}