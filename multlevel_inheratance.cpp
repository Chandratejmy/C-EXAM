#include<iostream>
using namespace std;
class student
{
    private :
    string name;
    int usn;
    public:
    void getdata(string n,int r)
    {
        name=n;
        usn=r;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"USN: "<<usn<<endl;
    }
};
class test
{
    private :
    int sub1,sub2;
    public:
    void getmarks(int a,int b)
    {
        sub1=a;
        sub2=b;
    }
    void displaymarks()
    {
        cout<<"Marks in subject 1: "<<sub1<<endl;
        cout<<"Marks in subject 2: "<<sub2<<endl;
    }
    int getsub1()
    {
        return sub1;
    }
    int getsub2()
    {
        return sub2;
    }
};
class result:public student,public test
{
    private :
    int total;
    public:
    void displayresult()
    {
        total=getsub1()+getsub2();
        display();
        displaymarks();
        cout<<"Total Marks: "<<total<<endl;
    }
};
int main()
{
    result re;
    cout<<"Enter the name and USN of the Student:";
    string na;
    int us;
    cin>>na>>us;
    re.getdata(na,us);
    cout<<"Enter the marks in two subjects:";
    int s1,s2;
    cin>>s1>>s2;
   re.getmarks(s1,s2);
   re.displayresult();
   return 0;
}