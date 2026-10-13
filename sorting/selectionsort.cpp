#include<iostream>
using namespace std;
void selectionsorting(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallest=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallest])
            {
                smallest=j;
            }
        }
        swap(arr[i],arr[smallest]);
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"    ";
    }
}
int main()
{
    int arr[7]={342,64,23,9,765,322345,123};
    int n=7;
    selectionsorting(arr,n);
    printarray(arr,n);
}