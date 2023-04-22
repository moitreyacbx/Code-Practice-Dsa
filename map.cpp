#include<bits/stdc++.h>
using namespace std;
class Map
{
    public:
    unordered_map<int,int> maps;
    vector<int> v;
    int j;
    void showmap()
    {
    for(auto i=1; i<10;i++)
    {
    cout<<"Enter elements"<<endl;
    cin>>j;
    v.push_back(j);
    }
    for(auto i: v)
    {
    maps[i]++;
    }
    for(auto i: maps)
    {
        if(i.second==1)
        {cout<<i.first<<"->";
        cout<<i.second<<endl;
        }}

    }
};
int main()
{
    Map m;
    m.showmap();
    return 0;
}