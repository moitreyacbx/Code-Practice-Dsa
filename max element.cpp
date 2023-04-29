#include<iostream>
using namespace std;
void maxelement(vector<int> arr)
{
    int temp=arr[0]
    for(int i=1;i<arr.size()-1;i++)
    {
        for(int j=1;j<arr.size()-i;j++)
        {
            if(arr[j]==temp)
            {
                count++;
            }
        }
        if(count>(arr.size())/2)
        {
            printf("The majority element is :",arr[i]);
            break;
        }
        else
        {
            temp=arr[i];
        }
    }
}
void main()
{
    vector<int> vec = {5,1,4,1,1,5,1};
    maxelement(vec);
    return 0;
}