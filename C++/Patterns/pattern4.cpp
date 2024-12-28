#include<iostream>
using namespace std;

int main(){
    int n,j=1;
    cin>> n;
        while (j<=(n*n))
        {
            cout<<j;
            j++;
            if (j%n==1){
                cout<<endl;
            }
        }
    return 0;
}