#include<iostream>
using namespace std;
class employee
{
    public:
    int ID;
    int Salary;
    string Employename;
    string Employedepartmentname;
    void display()
    {
        cout<<"----Employe Details----"<<endl;
        cout<<"ID:"<<ID<<endl;
        cout<<"Salary:"<<Salary<<endl;
        cout<<"EmployeName:"<<Employename<<endl;
        cout<<"EmployeDepartmentName:"<<Employedepartmentname<<endl;
    }
};
int main()
{
    employee e1;
    e1.ID=123456;
    e1.Salary=200000;
    e1.Employename="Kanan_Gupta";
    e1.Employedepartmentname="SOAI";
    e1.display();
    return 0;
}