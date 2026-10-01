#include<iostream>
using namespace std;
class person 
{
    public:
    string name;
    int age;
    long contact;
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Contact:"<<contact<<endl;
    }
};
class employe:public person
{
    public:
    int ID;
    void display2()
    {
        cout<<"ID:"<<ID<<endl;
    }
};
class manager:public employe
{
    public:
    string postname;
    int salary;
    void display3()
    {
        cout<<"Postname:"<<postname<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};
int main()
{
manager m1;
m1.name="Kanan_Gupta";
m1.age=17;
m1.contact=8750728744;
m1.ID=123456789;
m1.postname="Manager";
m1.salary=200000;
m1.display();
m1.display2();
m1.display3();
return 0;
}