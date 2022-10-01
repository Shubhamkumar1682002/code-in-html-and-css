/////////////////////////////////////////HOSPITAL MANAGEMENT SYSTEM/////////////////////////////////////
/////////////////////////////////////////HEADER FILES//////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <windows.h>

////////////////////////////////////////FUNCTION DECLARATION/////////////////////////////////////////

void menu();
void pascode();
void cpascode();

using namespace std;

//////////////////////////////////////////CLASS ONE////////////////////////////////////////

class one
{
public:
    virtual void get() = 0;
    virtual void show() = 0;

}

/////////////////////////////////////CLASS INFORMATION//////////////////////////////////////////

class info : public one

{
public:
    char name[50], time[50];
    int num, age;
    void get()

{        system("cls");
    cin.sync();
    cout << "\n ENTER THE PATIENT NAME=";
    cin.getline(name, 50);
    cout<<"ENTE THE APPOINMENT TIME="<<endl;
    cin.getline(time,50);
    cout<<"ENTER THE AGE="<<endl;
    cin>>age;
    cout<<"ENTER APPOINMENT NO="<<endl;
    cin>>num;
}


void show()
{
    cout<<"NAME="<<name;
    cout<<"AGE="<<age;
    cout<<"NO="<<num;
    cout<<"TIME="<<time;
}
};



///////////////////////////////////////////////////CLASS RANA///////////////////////////////


class rana:public info
{
    public;
    info a1;
    void get()
    {
        system("cls" )
        ofstream out ("rana.text",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cou<<"YOUR ENTRY HAS BEEN SAVED";
        menu();
    }
   
   void show()
 {   
    ifstream in("rana.txt");
   {
     cout<<"data in the file"<<endl;
     cou<<"PRESS ANY KEY TO CONTINUE"<<endl;
     menu();

   }

  else{
    while(!in.eof())
    {
        in.read((char*)&a1,sizeof(a1));
        a1.show();

    }
  in.close();
  menu();
  }
  

}
};


//////////////////////////////////////////////////CLASS DR WAQAR////////////////////////////////////////////


class waqar:public info
{

};



///////////////////////////////////////////////////// CLASS DR. AHMAD////////////////////////////////////

class ahmad: public info()

{
    public;
    info a1;
    void get()
    {
        system("cls" )
        ofstream out ("ahmad.text",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cou<<"YOUR ENTRY HAS BEEN SAVED";
        menu();
    }
   
   void show()
 {   
    ifstream in("ahmad.txt");
    if(in==null)
   {
     cout<<" no data in the file"<<endl;
     cou<<"PRESS ANY KEY TO CONTINUE"<<endl;
     menu();

   }

  else{
    while(!in.eof())
    {
        in.read((char*)&a1,sizeof(a1));
        a1.show();

    }
  in.close();
  menu();
  }
  

}
};
