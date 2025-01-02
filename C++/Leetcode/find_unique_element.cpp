#include<iostream>
using namespace std;
int findunique(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
       ans=arr[i]^ans;
        
    }
    return ans;
}
int main()
{
   int size; 
   cin>>size; 
   int arr[5]={1,4,1,4,1};
   cout<<findunique(arr, size);
   return 0;
}