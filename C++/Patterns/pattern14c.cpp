#include<iostream>
using namespace std;
int main()
{
   int n,i=0,j=0;
   char a=65;
   cin>>n;
   while (n>=i)
   {
    while (i>=j)
    {
        j++;
        cout<<a;
        a++;
    }
    j=0;
    i++;
    cout<<endl;
   }
   
   return 0;
}