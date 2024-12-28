#include <iostream>
using namespace std;

int main()
{
    int n, row = 1, col = 1, count = 0;
    cin >> n;
    while (n >= row)
    {
        while (row >= col)
        {
            count++;
            cout << (row+col-1);
            col++;
        }
        count = col;
        cout << endl;
        col = 0;
        row++;
    }

    return 0;
}