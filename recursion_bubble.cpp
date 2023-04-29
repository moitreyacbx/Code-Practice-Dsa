#include<iostream>
#include<vector>
using namespace std;
void helper(vector<int>& arr,int n){
    int temp;
    if(n==1)
    {
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    return helper(arr,n-1);
}
void recursiondisp(vector<int>& arr)
{
    helper(arr,arr.size());
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
}
int main()
{
    vector<int> nums={9,7,8,6,9,1,69,4,2,3,5,9};
    recursiondisp(nums);
    return 0;
}