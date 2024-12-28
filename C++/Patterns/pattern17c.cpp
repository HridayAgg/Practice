#include <iostream>
using namespace std;

int main()
{
    int n, row = 0, col = 0;
    cin >> n;
    while (n >= row)
    {
        char a = 'A' + n - row;

        while (row > col)
        {
            col++;
            cout << a;
            a++;
        }
        col = 0;
        row++;
        cout << endl;
    }

    return 0;
}