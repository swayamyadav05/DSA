/*
    A
    B C
    C D E
    D E F G
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        char start = 'A';
        for (int column = 1; column <= row; column++)
        {
            // char ch = 'A' + row + column - 2;
            // cout << ch << " ";
            char ch = start + row - 1;
            cout << ch << " ";
            start++;
        }
        cout << endl;
    }
}