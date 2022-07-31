/*
       *
      **
     ***
    ****
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        // printing space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        // print star
        for (int column = 1; column <= row; column++)
        {
            cout << "*";
        }
        cout << endl;
    }
}