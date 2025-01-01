#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return true;
        }
    }
        return false;
}
int main(){
    int kuch[3]={2,5,7};
    if(search(kuch,3,3)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}