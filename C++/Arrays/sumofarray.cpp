#include<iostream>
using namespace std;
int sumofarr(){
    int arr[4]={2,5,6,1},sum=0,n=sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    cout<<sumofarr();
    return 0;
}