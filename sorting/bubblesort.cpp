#include <iostream>
using namespace std;
void bubblesort(int arr[],int n)
{   
    
    for(int i=0;i<n;i++)
    {   
        bool isswap=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(!isswap)
        {
            return;
        }
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  "<<endl;
    }
}
int main()
{
    int arr[5]={3,4,63,4654,2};
    int n=5;
    bubblesort(arr,n);
    printarray(arr,n);
}