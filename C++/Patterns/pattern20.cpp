#include<iostream>
using namespace std;

int main(){
    int n,i=1,j=1,space=0;
    cin>>n;
    while (n>=i)
    {
        while ((n-space)>i)
        {
            cout<<' ';
            space++;
        }
        while (i>=j)
        {
            cout<<i;
            j++;
        }
        j=1;
        
        space=0;
        i++;
        cout<<endl;
    }
    
    return 0;
}