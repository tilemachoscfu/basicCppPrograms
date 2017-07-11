/*
 * A C++ program to display the sum of the digits of a given number.
 */

#include<iostream>

using namespace std;

int main()
{
    int num, value, sum = 0;

    cout << "Enter the number : ";
    cin >> value;
    num = value;

    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    cout << "The sum of the digits of "
         << value << " is " << sum;
}
