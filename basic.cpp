#include<iostream>
using namespace std;
int f(int n,int x)
{
    if(n==1)
    {
        return x;
    }
    int prev = f(n/2,x);
    if(n%2==1)
    {return prev * prev * x;} 
    return prev*prev;
}
int main()
{
    int n=f(9,6);
    cout<<n;
    return 0;
}