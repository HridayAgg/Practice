#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i=0;
    int sum=0,digit=0;
    cin>>n;
    while (n!=0)
    {   
        digit=n%10;
        
        if (sum>(INT32_MAX/10) || sum<(INT32_MIN/10))
        {
            cout<<0;
            return 0;
           
        }
        else{
             sum = digit + (sum*10);
        n = n/10;
        }
           

        
    }
    cout<<sum;
    return 0;
}
// //123
// 123 - 123%100=1
//       12.3%10=2