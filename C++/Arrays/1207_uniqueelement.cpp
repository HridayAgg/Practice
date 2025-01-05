#include<iostream>
using namespace std;
bool findunique(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=arr[i]^ans;/*we are xoring coz xoring with same number
        a^a=0 and a^0=a so duplicates will cancel out and unique will 
        only be left
        */
    }
    if (ans==0){
        return false;
    }
    else{
    return true;
    }
}
int main()
{   
    int arr[3]={3,3,3};
   cout<<findunique(arr,3);
   return 0;
}