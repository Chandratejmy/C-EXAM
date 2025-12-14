#include<iostream>
#include<cctype>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    string postfix;
    int a,b,i;
    cout<<"enter the postfix"<<endl;
    cin>>postfix;
    for(i=0;i<postfix.length();i++)
    {
        char c=postfix[i];
        if(isdigit(c))
        {
            s.push(c-'0');
        }
        else
        {
            b=s.top();s.pop();
            a=s.top();s.pop();
             switch(c)
             {
                 case '+':
                 s.push(a+b);
                 break;
                 case '-':
                 s.push(a-b);
                 break;
                 case '*':
                 s.push(a*b);
                 break;
                 case '/':
                 s.push(a/b);
                 break;
             }
        }
    }
    cout<<"infix value :"<<s.top()<<endl;
}