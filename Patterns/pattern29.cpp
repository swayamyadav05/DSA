/*
    1234554321
    1234**4321
    123****321
    12******21
    1********1
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        int start = 1;
        for (int col = n - row + 1; col >= 1; col--)
        {
            cout << start;
            start++;
        }
        for (int star = row - 1; star; star--)
        {
            cout << "**";
        }
        for (int end = n - row + 1; end >= 1; end--)
        {
            cout << end;
        }
        cout << endl;
    }
}