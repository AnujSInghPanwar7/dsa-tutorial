#include <iostream>
#include<vector>
using namespace std;

// Input Output
// Q1  Complete the function printNumber which takes an integer input from the user and prints it on the screen.
void printnumber()
{
    int n;
    cout << "Enter the number : \n";
    cin >> n;
    cout << "The number is : " << n << endl;
}

// If ElseIf
//  Given marks of a student, print on the screen:

// Grade A if marks >= 90
// Grade B if marks >= 70
// Grade C if marks >= 50
// Grade D if marks >= 35
// Fail, otherwise.

// Example 1

// Input: marks = 95
// Output: Grade A
// Explanation: marks are greater than or equal to 90.

// Example 2

// Input: marks = 14
// Output: Fail
// Explanation: marks are less than 35.
void studentgrade(int marks)
{
    if (marks >= 90)
    {
        cout << "Grade A\n";
    }
    else if (marks >= 70 && marks < 90)
    {
        cout << "Grade B \n";
    }
    else if (marks >= 50 && marks < 70)
    {
        cout << "Grade C \n";
    }
    else if (marks >= 35 && marks < 50)
    {
        cout << "Grade D \n";
    }
    else
    {
        cout << "Fail\n";
    }
}

// Switch Case
// Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than
void whichWeekDay(int day)
{
    switch (day)
    {
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tuesday\n";
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Satday\n";
        break;
    case 7:
        cout << "Sunday\n";
        break;
    default:
    cout<<"Invalid";
        break;
    }
}

// For Loop
// Given two integers low and high, return the sum of all integers from low to high inclusive.
int forloop(int low, int high){
    int sum=0;
    cout<<low<<endl<<high<<endl;
for (int i = low; i <= high; i++)
{
    sum +=i;
}
return sum;
}
// While Loop
// Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
// A number ends with digit d if its last digit is d.
int whileLoop(int d){
    int sum = 0;
    int i=0;
    while (i<50)
    {
        sum +=d;
        d +=10;
        i++;
    }
    return sum;
}

// Pass by Ref
// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
    void reverse(vector<int>& arr){
         int n = arr.size();
        for (int i = 0; i < n/2; i++)
        {
            swap(arr[i],arr[n-i-1]);
        }
    }

int main()
{

    printnumber();
    studentgrade(95);
    whichWeekDay(5);
    cout<<forloop(3,7)<<endl;
    cout<<whileLoop(5)<<endl;
    vector<int> arr = {1,2,3,4,5};
    reverse(arr);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}