#include<iostream>

using namespace std;


class goodness
{
private:
    int o,d,ess,
    char name[10];
public:
        
        getdata();
        putdata();
};

 void goodness::getdata()
{  cout<<"welcome in the dark web for hakers"<<endl;
   cout<<"you are the hacker"<<endl;
   cin>>name;
   cout<<" warning only for hacker if you not hacker  it will be danguers for you"<<endl;
   cin>>o>>d>>ess;
}

 void goodness::putdata()
{ 
    cout<<"this your id for dark web "<<endl<<endl;
    cout<<"now you can hack the dives give by the comend"<<endl;
    cout<<o+d*ess/3;


}

void main(){
 
 goodness d;
 d.getdata();
 d.putdata();


    
}