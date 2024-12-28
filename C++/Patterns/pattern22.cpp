#include<iostream>
using namespace std;

int main(){
    int i=0,j=0,n,space=0,count=1;
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
            cout<<count;
            j++;
            count++;
        }
        
        j=0;
        
        space=0;
        i++;
        cout<<endl;
    
    return 0;
}
}