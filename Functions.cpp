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

// Write a function to check if a number is prime or not
int PrimeOrNot(int n)
{
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }
    return isPrime;
}

// Write a function to print all prime number from 2 to n
void AllPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true)
        {
            cout << i << " , ";
        }
    }
}

// Write a function to print nth fibonacci
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
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

    // Write a function to check if a number is prime or not
    cout << PrimeOrNot(11) << endl;

    // Write a function to print all prime number from 2 to n
    AllPrime(55);
    cout << endl
         << endl;

    // Write a function to print nth fibonacci
    cout << fibonacci(9);
    return 0;
}