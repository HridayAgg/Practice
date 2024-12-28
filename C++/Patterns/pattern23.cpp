#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,n,space=0,count;
    cin>>n;
    while (n>=i)
    {
        count=i-1;
        while ((n-space)>=i)
        {
            cout<<' ';
            space++;
        }
        while (i>=j)
        {
            cout<<j;
            j++;
        }
        while (count)
        {
            cout<<count;
            count--;
        }
        

        j=1;
        space=0;
        i++;
        cout<<endl;
    }
    
    return 0;
}