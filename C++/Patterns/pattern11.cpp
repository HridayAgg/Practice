#include <iostream>
using namespace std;
int main()
{
    int n, row = 0, col = 0;
    char a = 65;
    cin >> n;
    while (n > row)
    {
        while (n > col)
        {
            cout << a;
            col++;
        }
        cout << endl;
        row++;
        col = 0;
    }

    return 0;
}