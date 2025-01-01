#include<iostream>
using namespace std;
int printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
}
int main(){
    int ohh[3]={1,2,3};
    printarray(ohh,3);
    return 0;
}