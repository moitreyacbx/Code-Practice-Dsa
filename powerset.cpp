#include<iostream>
#include<string>
using namespace std;
void powerset(string s,int i, string curr)
{
    if(i==s.length())
    {
        cout<<curr<<endl;
        return;
    }
    powerset(s,i+1,curr);
    powerset(s,i+1,curr+s[i]);

}
main()
{
    string str="abc",current="";
    powerset(str,0,current);
    return 0;
}