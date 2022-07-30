/*
    1111
     222
      33
       4
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        // int star=;
        for (int column = n - row + 1; column >= 1; column--)
        {
            cout << row;
        }
        cout << endl;
    }
}