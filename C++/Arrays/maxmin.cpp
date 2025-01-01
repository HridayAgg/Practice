#include<iostream>
using namespace std;
int arr[10],n;
int maxvalue(){
    
    int max=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minvalue(){
    
    int min=INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<minvalue();
    return 0;
}
              

                                      
                          
                                                             
             
                                   
                                  
                  
                 