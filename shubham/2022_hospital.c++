
/***********************************************************
			HEDERFILES
************************************************************/
#include<fstream>
// #include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip.h>
#include<dos.h>

/**********************************************************
			CLASS DELCLARTION
***********************************************************/


class doctor
{
	char did[10];
	char name[20];
	char dept[20];
	char h[10];

public:
	void create_doctor()
	{


		cout<<"\n\n\t\t"; cprintf("NEW doctor ENTRY...\n");
		cout<<"\n\t\t";	cprintf("Enter doctor ID-");
		cin>>did;
		cout<<"\n\t\t";	cprintf("Enter doctor's Full Name-");
		gets(name);
		cout<<"\n\t\t";	cprintf("Enter doctor Department-");
		gets(dept);
		cout<<"\n\t\t";	cprintf("Enter Doctor Mobile no.-");
		gets(h);

		cout<<"\n\nDoctor Record Created..";
	}

	void show_doctor()
	{
		textcolor(2);
		cout<<"\n\n\t\t "; cprintf(" Doctor ID:- ");
		cout<<" "<<did;
		cout<<"\n\n\t\t "; cprintf(" Name :-   ");
		puts(name);
		cout<<"\n\t\t "; cprintf(" Department:- ");
		puts(dept);
		cout<<"\n\t\t "; cprintf(" Mobile no.:- ");
		puts(h);
		cout<<endl;

	}

	void modify_doctor()
	{
		cout<<"\n\t\t"; cprintf("Enter Doctor ID : ");
		cin>>did;
		cout<<"\n\t\t"; cprintf("Modify Doctor Name : ");
		gets(name);
		cout<<"\n\t\t"; cprintf("Modify Doctor Department-");
		gets(dept);
		cout<<"\n\t\t "; cprintf("Modify Mobile no.:- ");
		gets(h);
	}

	char* retdid()
	{
		return did;
	}



	void report()

      {

       cout<<"\n     "<<did<<setw(10)<<" "<<name<<setw(18)<<dept<<setw(18)<<h<<setw(16)<<endl;}

};

/*********************************************************/
				//		PATIENT CLASS
				
/**************************************************/
class patient
{
	char pid[10];
	char name[20];
	char pstatus[20];
	char ad[10];
	char doc[10];
	char pstatus2[7];



public:
	void create_patient()
	{


		cout<<"\n\n\t\t"; cprintf("NEW Patient ENTRY...\n");
		cout<<"\t\t";	cprintf("Enter PATIENT ID-");
		cin>>pid;
		cout<<"\t\t";	cprintf("Enter PATIENT's Full Name-");
		gets(name);
		cout<<"\t\t";	cprintf("Enter PATIENT status-");
		gets( pstatus);
		cout<<"\t\t";	cprintf("Enter PATIENT address-");
		gets(ad);
		cout<<"\t\t";	cprintf("Enter doctor name-");
		gets(doc);
		cout<<"\t\t";	cprintf("Enter patient status(Admit/Dischraged=A/D) ");
		gets(pstatus2);

		cout<<"\n\npatient Record Created..";
	}

	void show_patient()
	{
		textcolor(2);
		cout<<"\n\n\t\t "; cprintf(" PATIENT ID:- ");
		cout<<" "<<pid;
		cout<<"\t\t "; cprintf(" Name :-   ");
		puts(name);
		cout<<"\t\t "; cprintf(" STATUS:- ");
		puts( pstatus);
		cout<<"\t\t "; cprintf(" ADDRESS:- ");
		puts(ad);
		cout<<"\t\t";	cprintf("Enter doctor name-");
		puts(doc);
		cout<<"\t\t";	cprintf("Enter patient status(Admit/Dischraged=A/D) ");
		puts(pstatus2);
		cout<<endl;

	}

	void show_h_patient()
	{
		textcolor(2);
		cout<<"\n\n "; cprintf(" PATIENT ID:-");
		cout<<" "<<pid;
		cout<<"  "; cprintf(" Name:-");
		puts(name);
		cout<<endl;
		
	}

	void modify_patient()
	{
	

	
	    	cout<<"\n\t\t"; cprintf("Enter patient ID : ");
			cin>>pid;
		
	    	cout<<"\t\t"; cprintf("Modify patient Name : ");
			gets(name);
		
	    	cout<<"\t\t"; cprintf("Modify patient STATUS-");
			gets( pstatus);
		
	    	cout<<"\t\t "; cprintf("Modify ADDRESS:- ");
			gets(ad);
		
	    	cout<<"\t\t";	cprintf("Enter doctor name-");
			gets(doc);
		
	    	cout<<"\t\t";	cprintf("Enter patient status(Admit/Dischraged=A/D) ");
			gets(pstatus2);
		
	    
		
	}

	char* retpid()
	{
		return pid;
	}

	char* retpstatus2()
	{
		return pstatus2;
	}
 
	void report()

      {

       cout<<"\n     "<<pid<<setw(10)<<" "<<name<<setw(18)<<pstatus<<setw(18)<<ad<<setw(16)<<doc<<setw(19)<<pstatus2<<setw(7)<<endl;}

};
/************************** class ends here  ************************/
fstream fp,fp1,fd,fd2;
patient st;


/************************** class ends here  ************************/
//fstream fd,fd2;
doctor dt;
///////**************************************************************
/*********************************************************************/

void head()
{       textbackground(15);
	clrscr();

	textcolor(15);
	textbackground(4);
	cout<<"\n\t";
		cprintf("  ");cout<<"\t\t   "; cprintf("                                "); 	    cout<<endl<<"\t";
		cprintf("  ");cout<<"\t\t   "; cprintf("                                "); 	       cout<<endl<<"    ";
	cprintf("          ");cout<<"\t\t   "; cprintf("     HOSPITAL MANGMENT SYSTEM   "); 	       cout<<endl<<"\t";
		cprintf("  ");cout<<"\t\t   "; cprintf("                                "); 		cout<<endl<<"\t";
		cprintf("  ");cout<<"\t\t   "; cprintf("                                "); 		cout<<endl<<"\t";
	textcolor(5);
	textbackground(15);
	  cout<<"\t";
	cprintf("============================================================");
 
/**************************************************************************
			output:-	Date-12-3-2018
***************************************************************************/

	cout<<"\n\t\t\t\t\t\t\t";
	struct date d;
	getdate(&d);
	textcolor(16);
	cprintf(" Date:-  %d/%d/%d ",d.da_day,d.da_mon,d.da_year);
/**************************************************************************/

	}
/*
	void entry()
	{
		head();
		textbackground(0);
	   clrscr();
	   int a,c=0,t=0;
	   char ch,pass[20];
	   char  passf[20]={'1','2','3','4','5','0'};
	   window(20,5,60,15);
	   textbackground(7);
	   clrscr();
	   gotoxy(18,1);
	   textcolor(5);
	   cprintf("PASSWORD");
	   window(21,6,59,14);
	   textbackground(1);
	   clrscr();
	   gotoxy(2,5);
	   textcolor(2);
	   cprintf("PASSWORD :-");
	   window(40,10,58,10);
	   textbackground(7);
	   textcolor(0);
	   clrscr();
	   gotoxy(2,1);

	   do{
		   ch=getch();
		   if(ch!=13&&ch!=8&&c<=16)
		   {
			   cout<<"*";
			   pass[c++]=ch;
		   }
		   if(ch==8&&c>0)
		   {
			   cout<<"\b \b";
		       //	   pass[--c]="\0";
		   }
	   }
		 while(ch!=13||c==0);


	   for(int i=0;i<6;i++)
	   {
		   if(pass[i]==passf[i])
			   t++;

	   }

	    window(20,5,60,15);
	   textbackground(7);
	   clrscr();
	   gotoxy(15,5);
	   textcolor(5);
	   window(1,1,80,25);  //full window
	   textbackground(0);
	   clrscr();
	   gotoxy(35,8);
	   textcolor(4);
	   if(t==6)
	   {

		   cprintf("PASSWORD RIGHT "); cout<<endl;
		   cout<<"\t\t\t\t";
		   cprintf("PRESS ENTER TO CONTIUE ");
	   }
		else
		{

		 cprintf("Password worng ");
			getch();
		exit(0);
		}
		window(1,1,80,25);  //full window
   getch();
	}
	*/
void menu()
{
	clrscr();
	head();
    /*	for(int i=0;i<=9;i++)
	{textbackground(i);
	cprintf("a"); cout<<"i="<<i<<endl;}    */
	textcolor(11);
	textbackground(6);
	cout<<"\n\n  ";
	cprintf("PRESS  ");
	cout<<"\n\n\n";
     cout<<"\n\t\t\t";  cprintf("                   "); cout<<"  "; cprintf("                  ");//cout<<endl;
     cout<<"\n\t\t\t";  cprintf("                   "); cout<<"  "; cprintf("                  ");//cout<<endl;
     cout<<"\n\t\t\t";  cprintf("  1. PATIENT       "); cout<<"  "; cprintf("   2.DOCTOR       ");//cout<<endl;
     cout<<"\n\t\t\t";  cprintf("    INFORMATION    "); cout<<"  "; cprintf("   INFORMATION    ");///cout<<endl;
     cout<<"\n\t\t\t";  cprintf("                   "); cout<<"  "; cprintf("                  ");//cout<<endl;
     cout<<endl;
     cout<<"\n\t\t\t";  cprintf("                   "); cout<<"  "; cprintf("                  ");//cout<<endl;
     cout<<"\n\t\t\t";  cprintf("  3.HOSPITAL       "); cout<<"  "; cprintf("     4.EXIT       ");//cout<<endl;
     cout<<"\n\t\t\t";  cprintf("    STATUS         "); cout<<"  "; cprintf("                  ");///cout<<endl;
     cout<<"\n\t\t\t";  cprintf("                   "); cout<<"  "; cprintf("                  ");//cout<<endl;
     cout<<"\n\t\t\t";  cprintf("                   "); cout<<"  "; cprintf("                  ");//cout<<endl;


}

void intro()
	{
	textbackground(15);
	clrscr();
	textbackground(10);
	textcolor(15);
	head();

	textbackground(15);
	textcolor(9);   cout<<"\t";

	cout<<"\n\n\n\t\t";
	cprintf( "Our project introduces Clinic Management System  ");
	cout<<endl;cout<<"\t\t";
	  cprintf("with an objective to provide a good graphical user interface.");cout<<endl;cout<<"\t\t";
	  cprintf("This project explores how computer technology can");cout<<endl;   cout<<"\t\t";
	cprintf("be used to solve the problem of user");cout<<endl;cout<<"\t\t";
	textcolor(8);
	cout<<endl;
	cprintf("\n\n Project Created By:-                                Submitted To:-    "); cout<<endl;


	cprintf("      Piyush Sankhala(205119065)                          DR.P.CHITRA MAM"); cout<<endl;
	cprintf("      Surbhi Dabhade (205119105)"); cout<<endl;
	cprintf("      MCA (2th semester)  ");
	cout<<"\n\t\t\t\t\t";
	textcolor(1170);
	cprintf(" PRESS ENTER TO CONTINUE.... ");  cout<<"\n\n\t\t\t\t\t";
	textcolor(15);
	getch();
	}
////////////////////////////////////////////????????????????????
/***************************************************************/

void write_doctor()
{
	char ch;
	fd.open("doctor.dat",ios::out|ios::app);
		dt.create_doctor();
		fd.write((char*)&dt,sizeof(doctor));
		cout<<"\n\n\t\t\tDo you want to add more record..(y/n?)";
		cin>>ch;
		fd.close();
		if(ch=='y'||ch=='Y')
		{
		 clrscr();
		head();
		textcolor(15);
		cout<<"\n\t";
			cprintf(" Home->Create Doctor ");
		write_doctor();
		fd.close();
		}
		  cout<<endl<<"\t\t\t\t\t";
	cprintf(" PRESS ENTER TO CONTINUE.... ");
	fd.close();
}



void display_spsd(char n[])
{
	int flag=0;
	fd.open("doctor.dat",ios::in);
	while(fd.read((char*)&dt,sizeof(doctor)))
	{
		if((strcmpi(dt.retdid(),n)==0))
		{
			dt.show_doctor();
			flag=1;
		}
	}

	fd.close();
	if(flag==0)
	 {
		cout<<"\n\n\t\t\t"; cprintf("Doctor does not exidt");
	 }
	   cout<<endl<<"\t\t\t\t\t";
	cprintf(" PRESS ENTER TO CONTINUE.... ");
	getch();
}

void modify_doctor()
{
	char n[10];
	int found=0;
	textcolor(16);
	cout<<"\n\n\t\t\t  "; cprintf(" || MODIFY DOCTOR RECORD || ");
	cout<<"\n\n\t\t"; cprintf("Enter The doctor ID ");
	cin>>n;
	fd.open("doctor.dat",ios::in|ios::out);
	while(fd.read((char*)&dt,sizeof(doctor)) && found==0)
	{
		if(strcmpi(dt.retdid(),n)==0)
		{
			dt.show_doctor();
			getch();
			clrscr();
			head();
			cout<<"\n\n\t\t\t  "; cprintf(" ||  MODIFY DOCTOR RECORD || ");

			cout<<"\n\n\t\t"; cprintf("  ||  Enter The New Details of doctor ||"); cout<<endl;
			dt.modify_doctor();
			int pos=-1*sizeof(dt);
			fd.seekp(pos,ios::cur);
			fd.write((char*)&dt,sizeof(doctor));
			cout<<"\n\n\t"; cprintf("Record Updated");
			found=1;
		}
	}

	fd.close();
	if(found==0)
	{
		cout<<"\n\n\t\t"; cprintf("Record Not Found ");
	}
	  cout<<endl<<"\t\t\t\t\t";
	cprintf(" PRESS ENTER TO CONTINUE.... ");
	getch();
}
void delete_doctor()
{
	char n[10];
	int flag=0;
	textcolor(6);
	cout<<"\n\n\n\t\t\t"; cprintf("DELETE Doctor Record");
	cout<<"\n\n"; cprintf("Enter The Doctor Id:- ");
	cin>>n;
	fd.open("doctor.dat",ios::in|ios::out);
	fstream fd2;
	fd2.open("Temp.dat",ios::out);
	fd.seekg(0,ios::beg);
	while(fd.read((char*)&dt,sizeof(doctor)))
	{
		if(strcmpi(dt.retdid(),n)!=0)
			fd2.write((char*)&dt,sizeof(doctor));
		else
			flag=1;
	}

	fd2.close();
	fd.close();
	remove("doctor.dat");
	rename("Temp.dat","doctor.dat");
	if(flag==1)
	    {
		cout<<"\n\n\t\t\t"; cprintf("Record Deleted ..");
	    }
	else
	    {
		cout<<"\n\n\t\t"; cprintf("Record not found");
	    }
	      cout<<endl<<"\t\t\t\t\t";
	cprintf(" PRESS ENTER TO CONTINUE.... ");
	getch();
}

void display_allds()
{
	fd.open("doctor.dat",ios::in);
	if(!fd)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
		getch();
		return;
	}

	cout<<"\n\t\t\t\t"; cprintf("DOCTOR LIST");
//	cout<<"\n "; cprintf("====================================================================");


	cout<<"\n     ID"<<setw(10)<<"              Name"<<setw(18)<<"            Department"<<setw(18)<<"       Contact no"<<setw(16);

	cout<<endl;
	cprintf("--------------------------------------------------------------------\n");

	while(fd.read((char*)&dt,sizeof(doctor)))
	{
		dt.report();
	}

	fd.close();
	  cout<<endl<<"\t\t\t\t";
	cprintf(" PRESS ENTER TO CONTINUE.... ");
	getch();
}

/*********************  MAIN FUNCTION END  *********************/

/***********************  PROGRAM END   **************************/


/****************************************************************/
/****************************************************************/




void write_patient()
{
	char ch;
	fp.open("patient.dat",ios::out|ios::app);
		st.create_patient();
		fp.write((char*)&st,sizeof(patient));
		cout<<"\n\n\t\t\tDo you want to add more record..(y/n?)";
		cin>>ch;
		fp.close();
		if(ch=='y'||ch=='Y')
		{
		 clrscr();
		head();
		textcolor(15);
		cout<<"\n\t";
			cprintf(" Home->Create patient ");
		write_patient();
		fp.close();
		}
		  cout<<endl<<"\t\t\t\t\t";
	cprintf(" PRESS ENTER TO CONTINUE.... ");
	fp.close();
}



void display_sps(char n[])
{
	int flag=0;
	fp.open("patient.dat",ios::in);
	while(fp.read((char*)&st,sizeof(patient)))
	{
		if((strcmpi(st.retpid(),n)==0))
		{
			st.show_patient();
			flag=1;
		}
	}

	fp.close();
	if(flag==0)
	 {
		cout<<"\n\n\t\t\t"; cprintf("PATIENT does not exist");
	 }
	   cout<<endl<<"\t\t\t\t\t";
	cprintf(" PRESS ENTER TO CONTINUE.... ");
	getch();
}

void modify_patient()
{
	char n[10];
	int found=0;
	textcolor(16);
	cout<<"\n\n\t\t\t  "; cprintf(" || MODIFY patient RECORD || ");
	cout<<"\n\n\t\t"; cprintf("Enter The patient ID ");
	cin>>n;
	fp.open("patient.dat",ios::in|ios::out);
	while(fp.read((char*)&st,sizeof(patient)) && found==0)
	{
		if(strcmpi(st.retpid(),n)==0)
		{
			st.show_patient();
			getch();
			clrscr();
			head();
			cout<<"\n\n\t\t\t  "; cprintf(" ||  MODIFY patient RECORD || ");

			cout<<"\n\n\t\t"; cprintf("  ||  Enter The New Details of patient ||"); cout<<endl;
			st.modify_patient();
			int pos=-1*sizeof(st);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&st,sizeof(patient));
			cout<<"\n\n\t"; cprintf("Record Updated");
			found=1;
		}
	}

	fp.close();
	if(found==0)
	{
		cout<<"\n\n\t\t"; cprintf("Record Not Found ");
	}
	  cout<<endl<<"\t\t\t\t\t";
	cprintf(" PRESS ENTER TO CONTINUE.... ");
	getch();
}
void delete_patient()
{
	char n[10];
	int flag=0;
	textcolor(6);
	cout<<"\n\n\n\t\t\t"; cprintf("DELETE patient Record");
	cout<<"\n\n"; cprintf("Enter The patient Id:- ");
	cin>>n;
	fp.open("patient.dat",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&st,sizeof(patient)))
	{
		if(strcmpi(st.retpid(),n)!=0)
			fp2.write((char*)&st,sizeof(patient));
		else
			flag=1;
	}

	fp2.close();
	fp.close();
	remove("patient.dat");
	rename("Temp.dat","patient.dat");
	if(flag==1)
	    {
		cout<<"\n\n\t\t\t"; cprintf("Record Deleted ..");
	    }
	else
	    {
		cout<<"\n\n\t\t"; cprintf("Record not found");
	    }
	      cout<<endl<<"\t\t\t\t\t";
	cprintf(" PRESS ENTER TO CONTINUE.... ");
	getch();
}


void display_alls()
{
	fp.open("patient.dat",ios::in);
	if(!fp)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
		getch();
		return;
	}

	cout<<"\n\t\t\t\t"; cprintf("PATIENT LIST");
//	cout<<"\n "; cprintf("====================================================================");


	//cout<<"\n     ID"<<setw(10)<<"              Name"<<setw(15);


		cout<<"\n "; cprintf("--------------------------------------------------------------------\n");
	   int flag=0;
	   int x=0;
	while(fp.read((char*)&st,sizeof(patient)))
	{

		    char m[7]="A";


		if((strcmpi(st.retpstatus2(),m)==0))
		{

			flag=1;
			x=x+1;
		}

	  }

	fp.close();
	 cout<<endl;
	  cprintf("TOTAL NO. OF PATIENT =");cout<<x;
	  int j=250-x;
	  cprintf("TOTAL NO. OF BED AVALIABLE "); cout<<j;cout<<"\n\t";
	  cprintf("TOTAL NO. OF DOCTOR AVALIABLE "); cout<<"5\n\t";
	  cprintf("TOTAL NO. OF NURSES AVALIABLE "); cout<<"10\n\t";
	  cprintf("TOTAL NO. OF OTHER STAFF AVALIABLE "); cout<<"12\n\t";
	if(flag==0)
	 {
		cout<<"\n\n\t\t\t"; cprintf("PATIENT does not exist");
	 }



	fp.close();
	  cout<<endl<<"\t\t\t\t";
	cprintf(" PRESS ENTER TO CONTINUE.... ");
	//getch();
}
void doc ()
{
	///////////////////////////////////////////////////
	int chd;

do{
	clrscr();
	head();
	textcolor(15);
	cout<<"\n\t";
	cprintf("Home->DOCTOR ");
	textcolor(16);
	textbackground(10);
	cout<<"\n\n\t\t"; cprintf(" Please Enter Your Choice (1-6) ");
	cout<<"\n\n\t\t"; cprintf(" 1.CREATE DOCTOR RECORD ");
	cout<<"\n\n\t\t"; cprintf(" 2.DISPLAY ALL DOCTOR RECORD ");
	cout<<"\n\n\t\t"; cprintf(" 3.DISPLAY SPECIFIC DOCTOR RECORD ");
	cout<<"\n\n\t\t"; cprintf(" 4.MODIFY DOCTOR RECORD ");
	cout<<"\n\n\t\t"; cprintf(" 5.DELETE DOCTOR RECORD ");
	cout<<"\n\n\t\t"; cprintf(" 6.EXIT ");cout<<"  ";
	cin>>chd;
	clrscr();
	head();
	textcolor(15);
	switch(chd)
	{
		case 1: cout<<"\n\t";
			cprintf(" Home->Create Doctor ");
			write_doctor();
			break;
		case 2: cout<<"\n\t";
			cprintf(" Home->All Doctor Record");
			display_allds();
			break;
		case 3: cout<<"\n\t";
			cprintf(" Home-> Doctor Record");
			char num[6];
			textcolor(9);
			cout<<"\n\t\t\t\t"; cprintf("DOCTOR DETAILE ");
			cout<<"\n\n\t\t\t"; cprintf("Please Enter The doctor ID ");
			cin>>num;
			display_spsd(num);
			break;
		case 4: cout<<"\n\t";
			cprintf(" Home-> Modify Doctor Record");
			modify_doctor();
			break;
		case 5: cout<<"\n\t";
			cprintf(" Home->Delete Doctor ");
			delete_doctor();
			break;
		case 6: break;
		default: cout<<"\n\n\n\n\n\n\t\t\t\t Invaild option ";
			getch();
			 break;
	       }
	}while(chd!=6);
//getch();
}

/********************************************************************/

void status()
{

	int chd;

do{
	clrscr();
	head();
	textcolor(15);
	cout<<"\n\t";
	cprintf("Home->DOCTOR ");
	textcolor(16);
	textbackground(10);
	cout<<"\n\n\t\t"; cprintf(" Please Enter Your Choice (1-6) ");
	cout<<"\n\n\t\t"; cprintf(" 1.FULL STATUS ");
	cout<<"\n\n\t\t"; cprintf(" 2.BLOOD STOCKS RECORD ");
	cout<<"\n\n\t\t"; cprintf(" 3.EXIT ");cout<<"  ";
	cin>>chd;
	clrscr();
	head();
	textcolor(15);
	switch(chd)
	{
		case 1: cout<<"\n\t";
			cprintf(" Home->FULL STATUS ");
			 cout<<"\n\t";
			cprintf(" HOSPITAL STATUS ");
			display_alls();
			cout<<"n\n\n\t\t\t";
			cprintf("\n\n\n\n\n\n\t\t\t\t ");
			break;
		case 2: cout<<"\n\t";
			cprintf(" Home->blo");

			break;
		case 3: break;
		default: cout<<"\n\n\n\n\n\n\t\t\t\t Invaild option ";
			getch();
			 break;
	       }
	}while(chd!=6);
//getch();
}

/********************************************************************/

void main()
{      // entry();
	intro();
	clrscr();
	int ch1;
int z[5];
do{
	clrscr();
	head();
	textcolor(15);
	cout<<"\n\t";
	cprintf("Home ");
	textcolor(16);
	textbackground(10);
	menu();
	cin>>ch1;
	clrscr();
	head();
	textcolor(15);
	switch(ch1)
	{
		case 1:
			int ch2;

do{
	clrscr();
	head();
	textcolor(15);
	cout<<"\n\t";
	cprintf("Home->PATIENT ");
	textcolor(16);
	textbackground(10);
	cout<<"\n\n\t\t"; cprintf(" Please Enter Your Choice (1-6) ");
	cout<<"\n\n\t\t"; cprintf(" 1.CREATE PATIENT RECORD ");
	cout<<"\n\n\t\t"; cprintf(" 2.DISPLAY SPECIFIC PATIENT RECORD ");
	cout<<"\n\n\t\t"; cprintf(" 3.MODIFY PATIENT RECORD ");
	cout<<"\n\n\t\t"; cprintf(" 4.DELETE PATIENT RECORD ");
	cout<<"\n\n\t\t"; cprintf(" 5.EXIT ");cout<<"  ";
	cin>>ch2;
	clrscr();
	head();
	textcolor(15);
	switch(ch2)
	{
		case 1: cout<<"\n\t";
			cprintf(" Home->ADD PATIENT ");
			write_patient();
			break;
		case 2: cout<<"\n\t";
			cprintf(" Home-> PATIENT Record");
			char num[6];
			textcolor(9);
			cout<<"\n\t\t\t\t"; cprintf("PATIENT DETAILE ");
			cout<<"\n\n\t\t\t"; cprintf("Please Enter The PATIENT ID ");
			cin>>num;
			display_sps(num);
			break;
		case 3: cout<<"\n\t";
			cprintf(" Home-> Modify PATIENT Record");
			modify_patient();
			break;
		case 4: cout<<"\n\t";
			cprintf(" Home->Delete PATIENT ");
			delete_patient();
			break;
		case 5:break;
		default: cout<<"\n\n\n\n\n\n\t\t\t\t Invaild option ";
			getch();
			 break;
}
	}while(ch2!=5);
				break;
		case 2: cout<<"\n\t";
	
			doc();
			break;
		case 3: cout<<"\n\t";
			cprintf(" HOSPITAL STATUS ");
			display_alls();
			cout<<"n\n\n\t\t\t";
	//		cprintf("\n\n\n\n\n\n\t\t\t\t ");
			
			getch();
			break;
		case 4: exit(0);
		default: cout<<"\n\n\n\n\n\n\t\t\t\t Invaild option ";
			getch();
			 break;
}
	}while(ch1!=4);
getch();
}
/**********************************************************************/
