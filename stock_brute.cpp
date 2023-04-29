#include<iostream>
#include<vector>
using namespace std;
void stock(vector<int> arr)
{
    int profit=0,maxprofit=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i;j<arr.size();j++)
        {
            profit=arr[j]-arr[i];
            if(profit>maxprofit)
            {
                maxprofit=profit;
            }
        }
    }
    cout<<"The maximum profit is:"<<maxprofit;
}
int main()
{
    vector<int> vec = {3,5,1,7,4,19,3};
    stock(vec);
    return 0;
}