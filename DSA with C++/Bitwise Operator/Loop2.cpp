// Fibonacci series

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of Fibonacci series: ";
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }
}