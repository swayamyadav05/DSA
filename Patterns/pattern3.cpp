/*
    11111
    2222
    333
    44
    5
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}