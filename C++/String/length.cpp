#include <iostream>
using namespace std;
char name[20];
int func(char n[]){
    int j=0;
    for (int i=0;name[i] != "\0";i++){
        j++;
    }
    return j;
}
int main(){
    cin>>name;
    cout<<func(name);
}