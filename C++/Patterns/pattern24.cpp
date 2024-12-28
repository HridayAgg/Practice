#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,n,count=1;
    cin>>n;
    while (n>=i)
    {
        while ((n-i+1)>=j)
        {
            cout<<j;
            j++;
        }

        count=1;
        while (count<=(2*(i-1)))
        {
           cout<<'*';
           count++;
        }
        while (j>1)
        {
            j--;
            cout<<j;
            
        }
        
        i++;
        j=1;
        cout<<endl;
    }
    
    return 0;
}