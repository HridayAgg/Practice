#include<iostream>
using namespace std;

int main(){
    int array[3]={2,4,5};
    for (int i = 0; i < 3; i++)
    {
        array[i]=1;
        cout<<array[i]<<" ";
    }
    cout<<array;
    return 0;
}