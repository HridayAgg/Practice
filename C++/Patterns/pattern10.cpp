#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, j = 0;
    char a = 65;
    cin >> n;
    while (n > i)
    {
        j = 0;

        while (j < 3)
        {
            j++;
            cout << a;
        }
        a++;
        i++;
        cout << endl;
    }

    return 0;
}
