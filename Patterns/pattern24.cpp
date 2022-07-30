/*
       1
      22
     333
    4444
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
        // int star=;
        for (int column = 1; column <= row; column++)
        {
            cout << row;
        }
        cout << endl;
    }
}