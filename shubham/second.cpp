
#include<iostream>
using namespace std;
class student 
{
private:
    long en_no;
    int m1,m2,m3,total;
    float avg;
    char name[50];


public:
     void getdata();
     void calculate();
     void putdata();

};
  void stuenter the enrollment no & name:";
    cin>>en_no>>name;
    cout<<"enter the mark in three subject:";
    cin>>m1>>m2>>m3;
};
  void student::calculate ()
{
    total=m1+m2+m3;
    avg = total/3;
};
  void student::putdata()
  {
      cout<<"your enrollment no & name are: ";
      cout<<endl<<en_no<<endl<<name;
      cout<<"your total is:"<<total;
      cout<<endl<<"your avg:"<<avg;
  };

  void main();
{  student s1;
    s1.getdata();
    s1.calculate();
    s1.putdata()
    return ;
}

