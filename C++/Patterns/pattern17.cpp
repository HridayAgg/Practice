#include <iostream>
using namespace std;

int main()
{
    int n, row = 1, col = 1;
    char a = 65 + n - row;
    cin >> n;
    while (n >= row)
    {
        while (row >= col)
        {
            cout << a;
            col++;

            a++;
        }
        col = 1;
        cout << endl;
        row++;
    }

    return 0;
}