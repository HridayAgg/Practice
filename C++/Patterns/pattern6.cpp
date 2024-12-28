#include<iostream>
using namespace std;

int main(){
    int i=1,j=0,n;
    cin>>n;
    while (n>=i){
        while(j<i){
            j++;
            cout<<i;
        }
        cout<<endl;
        j=0;
        i++;
    }
    return 0;
}