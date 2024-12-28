#include<iostream>
using namespace std;

int main(){
    int n,row=0,count=0,col = 1;
    cin>>n;
    
    while (n>=row)
    {
        while (row>=col)
        {
            count++;
            cout<<count;
            col++;
        }
        col =1;
        cout<<endl;
        row++;
    }
    
    return 0;
}