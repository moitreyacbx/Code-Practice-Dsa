#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size()-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        int low=0,high=nums.size()-1,mid;
        while(low<=high)
        {
        mid=(low+high)/2;
        if(nums[mid]==target)
        {
            res.push_back(mid);
        }
        else if(target>nums[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        }
        return res;
}
};
int main(){
    vector<int> res={1,2,2,3,5,4};
    vector<int> result;
    res=Solution.targetIndices(res,3);
}