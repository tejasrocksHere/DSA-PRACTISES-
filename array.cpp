#include<iostream>
using namespace std;
void reverse(int arr[], int size){
    for (int i = 0; i <size/2; i++)
    {
    int temp =arr[i];
    arr[i]=arr[size-i-1];
    arr[size-i-1]=temp;
    }
    
}

int main()
{
    int arr[5]={3,4,6,2,5};
    reverse(arr,5);
    for (int i = 0; i <5; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}
