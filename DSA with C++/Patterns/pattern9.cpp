/*
    1 
    2 3
    4 5 6
    7 8 9 10
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count=1;

    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            cout << count <<" ";
            count++;
        }
        cout << endl;
    }
}