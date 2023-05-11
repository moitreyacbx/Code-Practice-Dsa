#include<iostream>
using namespace std;
void rev(int *arr,int front,int rear)
{
    
    if(front+1>rear)
    {
        return;
    }
    int temp=arr[front];
    arr[front]=arr[rear];
    arr[rear]=temp;
    return rev(arr,++front,--rear);
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    rev(a,0,9);
    for(int i=0;i<9;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}