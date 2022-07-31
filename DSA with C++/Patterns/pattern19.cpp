/*
    D 
    C D
    B C D
    A B C D
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            char ch = 'A' + n - row + column - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}