#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, j = 0;
    char a = 65;
    while (n >= i)
    {
        j = 0;
        while (i > j)
        {
            j++;
            cout << a;

            
            a++;
        }
        
        cout << endl;
        i++;
    }

    return 0;
}