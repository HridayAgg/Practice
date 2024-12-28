#include<iostream>
using namespace std;
int main()
{
   int n,i=1,j=1;
   cin>>n;
   while (n>=i)
   {
    while (i>=j)
    {
        j++;
        cout<<char('A'+i-1);
    }
    cout<<endl;
    i++;
    j=1;
   }
   
   return 0;
}