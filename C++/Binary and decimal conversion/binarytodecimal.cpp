#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,ans=0,i=0;
    cin>>n;
    while (n!=0)
    {
        int bit = n%10;
    
        ans = (pow(2,i)*bit)+ans;
        i++;
        n = n/10;
    }
    cout<<ans;
    return 0;
}