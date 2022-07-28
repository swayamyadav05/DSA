/*
    1
    2 1
    3 2 1
    4 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        int value = row;
        for (int column = 1; column <= row; column++)
        {
            // cout << value;
            // value--;
            cout << row - column + 1 << " ";
        }
        cout << endl;
    }
}