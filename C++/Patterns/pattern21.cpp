#include<iostream>
using namespace std;

int main(){
    int n,i=1,j=1,space=0,count=1;
    cin>>n;
    while (n>=i)
    {
        while (space<i)
        {
            cout<<' ';
            space++;
        }
        while ((n-i+1)>=j)
        {
            cout<<count;
            j++;
        }
        
        space=0;
        i++;
        j=1;
        count=i;
        cout<<endl;
    }
    
    return 0;
}