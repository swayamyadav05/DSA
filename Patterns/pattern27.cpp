/*
    1234
     234
      34
       4
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int start = 1;
    for (int row = 1; row <= n; row++)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        for (int column = row; column <= n; column++)
        {
            cout << column;
        }
        cout << endl;
    }
}