#include<iostream>
using namespace std;

int main(){
    int n,i=0,j=0,space=0,count=1;
    cin>>n;
    while (n>i)
    {
        while ((n-space)>i)
        {
            cout<<' ';
            space++;
        }
        space=0;
        while (i>=j)
        {
            cout<<count;
            count++;
            j++;
        }
        
        i++;
        cout<<endl;
        j=0;
        
        
    }
    return 0;
}