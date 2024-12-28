#include<iostream>
using namespace std;
int main()
{
   int n,row=0,col=0;
   cin>>n;
   while (n>row)
   {
    while (n>col)
    {
        cout<<char('A'+row+col-1+1);
        col++;
    }
    cout<<endl;
    row++;
    col=0;
   }
    
   return 0;
}