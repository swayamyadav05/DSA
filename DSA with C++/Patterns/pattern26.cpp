/*
4321
 321
  21
   1
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
        for (int column = n - row + 1; column >= 1; column--)
        {
            cout << column;
        }
        cout << endl;
    }
}