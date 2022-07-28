/*
    1
    2 3
    3 4 5
    4 5 6 7
    5 6 7 8 9
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        // int value=row;
        for (int column = 1; column <= row; column++)
        {
            // cout << value << " ";
            // value++;
            cout << row + column - 1 << " ";
        }
        cout << endl;
    }
}