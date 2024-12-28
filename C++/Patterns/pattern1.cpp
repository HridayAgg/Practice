#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1, j = 0;
    while (j < n)
    {
        while (i <= n)
        {
            cout << '*';
            i++;
        }
        cout<<'\n';
        i=1;
        j++;
    }
    return 0;
}