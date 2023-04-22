#include<iostream>
#include<string>
using namespace std;
void powerset(string s,int l, int r)
{
    if(l==r)
    {
        cout<<s<<endl;
        return;
    }
    for(int i=l;i<r;i++)
    {
    swap(s[l],s[i]);
    powerset(s,i+1,r);
    swap(s[l],s[i]);
    }
}
main()
{
    string str="abcd";
    powerset(str,0,4);
    return 0;
}