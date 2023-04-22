#include<bits/stdc++.h>
using namespace std;
class p
{

    int ind=0,l=0,r=0;
    public:
    void subs(int ind,vector<int> &n,vector<int> arr,vector<vector<int>> &ans,int s)
{
    if(ind>=arr.size())
    {
        ans.push_back(n);
        return;
    }
subs(ind+1,n,arr,ans,s);
   n.push_back(arr[ind]);
   s+=arr[ind];
   subs(ind+1,n,arr,ans,s);
   s-=arr[ind];
   n.pop_back();
   
        
}
};
int main()
{
    p obj;
    int index=0;
    vector<int> array;
    vector<vector<int>> res;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(3);
    vector<int> v; 
    
    obj.subs(index,v,array,res,0);
    for(vector<int>j : res)
    {
    for(auto i : j)
    {
        
        cout<<"{"<<i<<"} ";
    }
    

    cout<<endl;
    }
    return 0;
}