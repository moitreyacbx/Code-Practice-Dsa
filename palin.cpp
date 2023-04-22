#include <string>
#include <iostream>
using namespace std;
bool ispal(string s,int l,int r)
{
    if(l>=r)
    {
        return true;
    }
    if(s[l]!=s[r])
    {
        return false;
    }
    return ispal(s,l+1,r-1);
}
main()
{
    bool flag=ispal("MoiiouM",0,5);
    if(flag==0)
    {
        cout<<"Not";
    }
    cout<<"Pal";
    return 0;
}