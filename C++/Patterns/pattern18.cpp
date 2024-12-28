#include<iostream>
using namespace std;

int main(){
    int i=0,j=0,n,space=0;
    cin>>n;
    while (n>=i)
    {
        while (space<i)
        {
            cout<<' ';
            space++;
        }
        space=0;
        while ((n-i)>j)
        {
            cout<<'X';
            j++;
        }
        j=0;
        i++;
        cout<<endl;

    }
    
    return 0;
}