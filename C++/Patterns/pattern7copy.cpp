#include<iostream>
using namespace std;

int main(){
    int col=1,row=0,n,count=0;
    cin>>n;
    while (n>=row)
    {
        while (row>=col)
        {
            
            count++;
            cout<<count;
            col++;
        }
        cout<<endl;
        col = 1;
        row++;
    }
    
    return 0;
}