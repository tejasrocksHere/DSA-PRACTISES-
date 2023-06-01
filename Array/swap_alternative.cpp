#include<iostream>
using namespace std;



void swap_alternate(int arr[],int size){
int f;
int l;

for (int i = 0; i < size; i++)
{
    if (i+1<size)
    {
        /* code */
    
// f=arr[i];
// l=arr[i+1];
swap(arr[i],arr[i+1]);
i++;

    }

}

}
// void  printArr(int arra,int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arra[i]<<" "; 
//     }
//     cout<<endl;
// }
int main(int argc, char const *argv[])
{
    int arr[6]={1,2,3,4,5,6};
    swap_alternate(arr,6);
// prin
// tArr(arr,6);

for (int i = 0; i < 6; i++)
{
    cout<<arr[i];
}

    return 0;
}


int findUnique(int *arr, int size)

{
   for(int i=0;i++;i<size){
int num=arr[i];
 int check=0;
       for(int j=i+1;j++;j<size){
if(num==arr[j])
{
check=1;

}



       }

if(check==0)
{
  return arr[i];
    break;
}
   }
}