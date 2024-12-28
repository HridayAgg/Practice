#include<iostream>
using namespace std;

int main(){
    int n,i=0;
    cin>>n;
    while (n!=0)
    {
        int digit = n&1;
        if (digit==1){
            i++;
        }
        n = n>>1;
    }
    
    if (i==1){
        cout<<true;
    }
    else{
        cout<<false;
    }
    return 0;
}
