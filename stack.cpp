#include<iostream>
#include<stack>
#include<string>
#define size 5
using namespace std;
class stack1
{
    private:
    int i,top,s[10];
    public:
    int item;
    stack1()
    {
        top=-1;
    }
    void push()
    {
        if(top==size-1)
        {
            cout<<"stack is full"<<endl;
        }
        else 
        {
            s[++top]=item;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else 
        {
        top--;
        }
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            for(i=0;i<=top;i++)
            cout<<s[i]<<endl;
        }
        
    }
};
int main()
{
    stack1 ob;
    for(;;){
        int choice;
        cout<<"1.pop\n2.top\n3.display\n Enter the choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"enter the item"<<endl;
            cin>>ob.item;
            ob.push();
            break;
            case 2:
            ob.pop();
            break;
            case 3:
            ob.display();
            break;
            default:exit(0);
        }
    }
    return 0;
}
