#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> v;
        vector<bool> res;
        for(auto i : candies)
        {
            v.push_back(i);
        }
        for(int i=0; i<candies.size(); i++)
        {
            candies[i] = extraCandies+candies[i];
            
        }
        for(auto i : candies)
        {
            if(i>=*max_element(v.begin(),v.end()))
            {
                res.push_back(true);
            }
            else
            res.push_back(false);
        }
        return candies;
    }

};
int main()
    {
     vector<int> v={2,3,5,1,3};
     vector<int> res;
     int extra=3;
     Solution obj;
     res=obj.kidsWithCandies(v,extra);
     for(auto i : res)
     {
     cout<<i<<endl;
    }
    return 0;
    }