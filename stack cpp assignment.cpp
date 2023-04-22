#include<bits/stdc++.h>
using namespace std;
class Stack 
{
    int size;
    int vector<int> v;
    Stack(int size)
    {
        this->size = size;

    }
    bool isempty()
    {
        if(size == 0)
        return true;
        else return false;
    }
    int pop()
    {
        if(isempty())
        cout<<"Empty stack"<<endl;
        else
         return v.pop_back();
    }
    bool isfull()
    {
        if(v.size() == size-1)
        return true;
        else return false;
    }
    void push(int i)
    {
        if(isfull())
        v.emplace_back(i);
    }
    void display()
    {
        if(isempty())
        cout<<"Empty stack"<<endl;
        else
        for(auto it : v)
        cout<<it<<endl;
    }
    void peek(int ele)
    {
        if(isempty())
        cout<<"Empty stack"<<endl;
        else
        for(auto it : v)
        {
            while(it != ele)
            {
            int s=0;
            s++;
            break;
            }
            cout<<"Current position:"<<s<<endl;
          

    }
};
int main()
{
    int size,ch,ele;
    cout<<"Enter size of stack:"<<endl;
    cin >> size
    Stack st(size);
    while(1){
        cout<<"Enter 1 to push in stack"<<endl;
        cout<<"Enter 2 to pop in stack"<<endl;
        cout<<"Enter 3 to display out stack"<<endl;
        cout<<"Enter 4 to peek out stack"<<endl;
        cin>>ch;
    }
    switch(ch){
        case 1: << " Enter element to push:"<<endl;
        cin>>ele;
        st.push(ele);
        case 2: << " Enter element to pop:"<<endl;
        ele= st.pop();
        cout<< "Pop element"<< ele<<endl;
        case 3: 
        st.display();
        case 4:
        cout<< "Enter element to display:"<<endl;
        cin>>ele;
        st.peek(ele);
        default:
        cout<<"Exiting..."<<endl;
        exit(1);
        break;

}
return 0;
}