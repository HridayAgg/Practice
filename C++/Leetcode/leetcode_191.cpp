#include<iostream>
using namespace std;

int main(){
    int n,num=0;
    cin>>n;
    while (n!=0)
    {
        if (n&1)
        {
            num++;
        }
        n=n>>1;
    }
    
    cout<<num;
    return 0;
}