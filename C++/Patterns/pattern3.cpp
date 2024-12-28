#include<iostream>
using namespace std;

int main(){
    int i=0,n=0,j=1;
    cin>>n;
    while(i<n){
        while (j<=n)
        {
            cout<<n-j+1;
            j++;
        }
        j=1;
        i++;
        cout<<endl;
    }
    return 0;
}