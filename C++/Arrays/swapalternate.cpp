#include <iostream>
using namespace std;
void swapalt(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i+1)<size){
        swap(arr[i], arr[i + 1]);

        }
    }
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    swapalt(arr, size);
    printarray(arr, size);
    return 0;
}