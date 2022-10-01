#include<iostream>
using namespace std;

class student_info
{
    char name[50];
    int  age;
    char enrollment_no[20];
    char blood_group[5];

    public:
    void getdata(void);
    void display(void);
};

 void student_info::getdata(void)

{

    cout<<"enter the  name";
    cin>>name;
    cout<<"enter the age";
    cin>>age;
    cout<<"enter enrollment_no";
    cin>>enrollment_no;
    cout<<"enter your blood__group";
    cin>>blood_group;

}

  void student_info::display(void)

{

    cout<<"\n name::"<<name;
    cout<<"\n age ::"<<age;
    cout<<"\n enrollment_no::"<<enrollment_no;
    cout<<"\n blood_group::"<<blood_group;
}
int main()
{

    student_info p;
    p.getdata();
    p.display();

    return 0;
}
