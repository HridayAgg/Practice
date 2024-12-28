#include<iostream>
using namespace std;

int main(){
    int n,j=0,i=1;
    cin>>n;
    while (i<=n){
        while (j<3)
        {
            cout<<i;
            j++;
        }
        j=0;
        i++;
        cout<<endl;
        
    }
    return 0;
}