/*
    A B C 
    D E F
    G H I
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char start = 'A';

    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= n; column++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}