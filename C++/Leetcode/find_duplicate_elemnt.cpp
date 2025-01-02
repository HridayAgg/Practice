// this works only in the case of array range of 1 and n-1

#include<iostream>
using namespace std;
int duplicateelmnt(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=(arr[i] ^ ans);
    }
    for (int i = 0; i < size; i++)
    {
        ans=ans ^ i;
    }
    return ans;
}
int main()
{
    int arr[5]={3,2,3,4,1};
//    int size,arr[100];
//    cin>>size;
//    for (int i = 0; i < size; i++)
//    {
//     cin>>arr[i];
//    }
   cout<<duplicateelmnt(arr,5);
   return 0;
}