#include<iostream>
using namespace std;
int reversearray(int arr[],int size){
    int start=0;
    int end=size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }

}
int arr[4]={4,7,1,5};
int main(){
    reversearray(arr,4);
    return 0;
}