/*
    A A A 
    B B B
    C C C
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    for (row = 1; row <= n; row++)
    {
        for (int column = 1; column <= n; column++)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}