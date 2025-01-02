#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i=0;
    float ans=0;
    cin>>n;
    while (n!=0)
    {
        int bit =n&1;
        
        ans = (pow(10,i)*bit)+ans;
        i++;
        n=n>>1;
    }
    cout<<ans;
    
    return 0;
}
//-6 -> 100000111

  
  
         



