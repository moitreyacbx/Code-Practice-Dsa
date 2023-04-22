#include<bits/stdc++.h>    
using namespace std;
class Base
{
    int a;
    public:
    void fun(int x)
    {
        cout << "Base function" << endl;
    }
};
class Inherited : public Base
{
    public:
    void fun(double x)
    {
        cout << "Inherited function" << endl;
    }
};
int main()
{
    Inherited *d = new Inherited();
    d->fun(1);
    d->fun(1.5);
    Base *a = new Inherited();
    a->fun(1);
    a->fun(1.5);
    return 0;
}