#include<iostream>
#include<vector>
using namespace std;
void sortone(int arr[],int n){
    int i=0;
    int j=n-1;
    while (i<=j)
    {
        while (arr[i]==0&&i<=j)
        {
            i++;
        }
        while (arr[j]==1 &&i<=j)
        {
            j--;
        }
        if (i<=j)
        {
            /* code */
        swap(arr[i],arr[j]);
        i++;
        j--;    
        }
        
            /* code */
        
    }
    
}
int printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
}
int main()
{
    int arr[]={1,0,0,1,0,1};
    sortone(arr,6);
    // sort(arr, arr + 6);
   printarray(arr,6);
   return 0;
}