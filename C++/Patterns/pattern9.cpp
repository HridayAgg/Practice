#include<iostream>
using namespace std;

int main(){
    int row=1,col=1,n,count=0;
    cin>>n;
    while (n>=row)
    {
        count=row;
       while (row>=col)
       {
        cout<<(row-col+1);
        // count--;
        col++;
        
       }
       cout<<endl;
       col=1; 
       row++;
    }
    
    return 0;
}