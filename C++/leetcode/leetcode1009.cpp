#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, digit = 0, i = 0, ans = 0,mask=0;
    cin >> n;
    int m=~n;
    if(n=0){
        cout<<1;
    } 
    while (n != 0)
    {
        mask =(mask<<1) | 1;
        n=n>>1;
    }  
    
    ans = ((m)&mask);
cout << ans;
    return 0;
}