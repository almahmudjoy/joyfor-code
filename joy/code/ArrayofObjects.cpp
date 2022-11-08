#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    int id;
    string name;
    int marks;
public:
    void getData()
    {
        cout<<"Enter Id: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void putData()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    Student s[3];
    int i,t;
    for(i=0;i<3;i++)
    {
      s[i].getData();
      cout<<endl;
    }
    for(i=0;i<3;i++)
    {
      s[i].putData();
      cout<<endl;
    }
    return 0;

}
