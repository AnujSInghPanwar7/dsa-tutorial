#include <iostream>
using namespace std;
int main()
{
    // Conditional statement
    // if else

    int age;
    cout << "Enter your age: \n";
    cin >> age;
    if (age > 18)
    {
        cout << "You are underage";
    }
    else
    {
        cout << "You are eligible\n";
    }

    // if else-if else

    int marks;
    cout << "Enter your marks :\n";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "A\n";
    }
    else if (marks < 90 && marks >= 80)
    {
        cout << "B\n";
    }
    else
    {
        cout << "C\n";
    }

    // Q)  Find character lowercase or uppercase
    //  Merko to lagta hai isme ascii ka use hoga lets see i can solve myself or do i need answer to solve this 97 122

    char ch;
    cout << "Enter the character :\n";
    cin >> ch;
    int alphabet = ch;
    if (alphabet <= 122 && alphabet >= 97)
    { // according to video mai iski jaga ya to simple ch=a-z ya ch=97-122 le sakta tha isme data type change krne ki jarurat nahi thi
        cout << "Lower case\n";
    }
    else
    {
        cout << "Upper case\n";
    }

    // ternary statment or condition

    int n = 2;
    cout << (n % 2 == 0 ? "even" : "odd") << endl;

    // LOOPS
    // while loop
    // Q) print number 1 to 5
    // eazzzy

    int count = 1;
    while (count <= 5)
    {
        cout << count << endl;
        count++;
    }

    // for loop
    // Q) sum of number from 1 to n

    int n = 50;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        if (i == 5)
        {
            break;
        }
    }
    cout << sum << endl;

    // Q) sum of all odd numbers from 1 to n

    int OddSum = 0;
    for (int i = 1; i <= 50; i += 2)
    {
        OddSum = OddSum + i;
    }
    cout << OddSum << endl;

    // do-while loop

    int i = 1, n = 10;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);

    // Q) check if a number is prime

    int n = 19;
    bool isPrime = true;
    for (int i = 2; i < n; i++) // i*i=n kyunki root n tak hi check krna hota hai then it is optimised code
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime = true)
    {
        cout << "number is prime\n";
    }
    else
    {
        cout << "number is non prime\n";
    }

    // NESTED LOOPS

    int k = 5;
    for (int i = 0; i < k; i++)
    {
        int m = 5;
        for (int j = 0; j < m; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}