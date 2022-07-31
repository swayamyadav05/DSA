/*
       1
      121
     12321
    1234321
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        for (int column = 1; column <= row; column++)
        {
            cout << column;
        }
        for (int start = row - 1; start; start--)
        {
            cout << start;
        }
        cout << endl;
    }
}