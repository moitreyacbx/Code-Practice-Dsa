#include<iostream>
#include<vector>
using namespace std;
void stock(vector<int> arr)
{
    int profit=0,maxprofit=0,minsofar=arr[0];
    for(int i=0;i<arr.size();i++)
    {
        profit=arr[i]-minsofar;
        if(profit>maxprofit)
        {
            maxprofit=profit;
        }
        if(arr[i]<minsofar)
        {
            minsofar=arr[i];
        }

    }
    cout<<"The maximum profit is:"<<maxprofit;
}
int main()
{
    vector<int> vec = {5,1,8,2,9};
    stock(vec);
    return 0;
}