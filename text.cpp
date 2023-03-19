#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4};
    int *ptr;
    ptr+0=arr;
    for(int i=0;ptr[i]!=0;i++)
    {
        cout<<ptr[i]<<" ";
    }
    return 0;
}