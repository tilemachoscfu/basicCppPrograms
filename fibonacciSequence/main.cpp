#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 1, k = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;

    cout << "Fibonacci Series: " << i << ", " << j << ", ";

    k = i + j;

    while(k <= n)
    {
        cout << k << ", ";
        i = j;
        j = k;
        k = i + j;
    }
    return 0;
}
