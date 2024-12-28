#include <iostream>
using namespace std;

int main()
{
    int i = 1, j = 1, space = 0, n;
    cin >> n;
    while (n >= i)
    {
        while ((n - i+1) >= j)
        {
            cout << i;
            j++;
        }
                j = 1;
        cout << endl;
        while (space < i)
        {
            cout << ' ';
            space++;
        }
        space = 0;
i++;

        
    }

    return 0;
}