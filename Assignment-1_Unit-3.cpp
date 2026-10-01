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
class student:public person
{
    public:
    int rollno;
    string branch;
    void display2()
    {
        cout<<"RollNo:"<<rollno<<endl;
        cout<<"Branch:"<<branch<<endl;
    }
};
int main()
{
    student s1;
    s1.name="Kanan_Gupta";
    s1.age=17;
    s1.contact=8750728744;
    s1.rollno=43;
    s1.branch="SOAI";
    s1.display();
    s1.display2();
    return 0;
}