#include<iostream>
#include<string>
#define size 4
using namespace std;
class queues
{
    private:
    int i,s[10],rear,front;
    public:
    int item;
    queues()
    {
        rear=-1;
        front=0;
    }
    void enqueue()
    {
        if(rear==size-1)
            cout<<"full"<<endl;
        else
            s[rear++]=item;
    }
    void dequeue()
    {
        if(rear<front)
        cout<<"empty-----------^^^^^^^_____________"<<endl;
        else 
        front++;
    }
    void display()
    {
        if(rear<front)
        cout<<"empty**************>><<>>>>>>>>************"<<endl;
        else
        for(i=front;i<=rear;i++)
        cout<<s[i]<<endl;
    }
};
    int main()
    {
        queues q;
        for(;;)
        {
        int choice;
        cout<<"enter the choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
             cout<<"enter the value";
             cin>>q.item;
             q.enqueue();
             break;
             case 2:
             q.dequeue();
             break;
             case 3:
             q.display();
             break;
             default:exit(0);
        }
    }
    return 0;
    }