#include <iostream>
using namespace std;
void print(int arr[], int index, int size)
{
    if(index==size)
    {
        return;
    }
    cout<<arr[index]<<"  ";
    print(arr,index+1,7);
}
int main()
{
    int arr[7]={10,20,30,40,50,60,70};
    print(arr,0,7);
}