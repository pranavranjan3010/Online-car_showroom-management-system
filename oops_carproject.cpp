#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<windows.h>
using namespace std;
class car
{
	public:
		
		int choice;
		int no;
		int age;
		int method;
		string gender;
		int income;
	    string price=" 7 crores";
		string color="RED";
		int model_no=326658;
		string mileage="10 km per litre";
		string name;
		void car_details()
		{
			/*
			initwindow(600,500,"project-oops(car)");
	        setbkcolor(WHITE);
	        cleardevice();
	        readimagefile("Logo.jpg",150,150,500,500);
	        getch();
	        closegraph();
			*/
	
	
			system("color 7C");
			cout<<"---------------------------------------------------------------------------------------------------------------------------------------------";
			cout<<"\n                                                     HARRY AUTOMOBILES\n";
			cout<<"\n---------------------------------------------------------------------------------------------------------------------------------------------";
		    cout<<"\n******************************************************2021 CARS COLLECTIONS****************************************************************";
	        cout<<"\n1.FERRARI\n2.BMW\n3.AUDI\n4.ROLLS ROYCE\n5.JAGUAR";
	        cout<<"\nEnter the choice\n";
	        cin>>choice;
	        system("cls");
	        switch(choice)
	        {
	        	case 1:
	        		cout<<"You will choose Ferrari\n";
	        		cout<<"----------------------------------CAR ATTRIBUTES--------------------------\n";
	        	    break;
	        	    case 2:
	        		cout<<"You will choose Bmw\n";
	        		cout<<"----------------------------------CAR ATTRIBUTES--------------------------\n";
	        	    break;
	        	    case 3:
	        		cout<<"You will choose Audi\n";
	        		cout<<"----------------------------------CAR ATTRIBUTES--------------------------\n";
	        	    break;
	        	    case 4:
	        		cout<<"You will choose Rolls Royce\n";
	        		cout<<"----------------------------------CAR ATTRIBUTES--------------------------\n";
	        	    break;
	        	    case 5:
	        		cout<<"You will choose Jaguar\n";
	        		cout<<"----------------------------------CAR ATTRIBUTES--------------------------\n";
	        	    break;
	        	    default:
	        	    	cout<<"Plz select the correct option\n";
	        	    	
	        	    	
	        	    
			}
	       
	       
	   }
	   void car_attributes()
	   {
	   	
	   	cout<<"Price-:"<<price<<endl;
	   	cout<<"Color-:"<<color<<endl;
	   	cout<<"Model_no-:"<<model_no<<endl;
	   	cout<<"Mileage-:"<<mileage<<endl;
	   }
	   void car_functions()
	   {
	   	cout<<"\n----------------------------------------------------------------------------------";
	   	cout<<"\n                     Functions of the car    ";
	   	cout<<"\n-----------------------------------------------------------------------------------";
	   }
	   void car_speed()
	   {
	   	cout<<"\nIt has the maximum speed of 200km\n";
	   	
	   }
	    void car_roof()
	   {
	   	cout<<"\nIt has facility of roof opening system\n";
	   }
	    void car_luxaryseats()
	   {
	   	cout<<"\nIt has the luxury seating arrangements\n";
	   }
	    void car_petrol()
	   {
	   	cout<<"\nIt will consume pertol of 1 litres in 2km\n";
	   }
	    void car_dashboard()
	   {
	   	cout<<"\nIt has the Bentley's rotating dashboard\n";
	   	
	   }
	   void clear()
	   {
	   	
	   }
	   
	   void car_booking()
	   {
	   	
	   	
	   	cout<<"\n-------------------------BOOKING DETAILS-------------------------------------\n";
	   	
	   	cout<<"Enter the name of your car\n";
	   	cin>>name;
	   	cout<<"Name-:"<<name<<endl;
	   	cout<<"\n";
	    system("cls");
	    system("color 7C");
	   	cout<<"\n--------------------PERSONAL DETAILS-----------------------\n";
	   	cout<<"Name of the car you chooose-:"<<name<<endl;
	   	cout<<"\nEnter your name\n";
	   	cin>>name;
	   	cout<<"\nEnter your age\n";
	   	cin>>age;
	   	cout<<"\nEnter your gender\n";
	   	cin>>gender;
	   	cout<<"\nEnter your annual income\n";
	   	cin>>income;
	   	
	   	cout<<"\nName-"<<name<<"\n"<<"Age-"<<age<<"\n"<<"Gender-"<<gender<<"\n"<<"Annual Income-"<<income<<endl;
	   	
	   }
	   void car_payment()
	   {
	   	cout<<"\n----------------------PAYMENT DETAILS----------------------\n";
	   	
	   	cout<<"\nEnter the Payment method\n";
	   	cout<<"\n1.Online\n2.Deman Draft\n";
	   	cin>>method;
	   	switch(method)
	   	{
	   		case 1:
	   			cout<<"\nYou choose online Payment option!!\n";
	   			cout<<"Enter your cvv number\n";
	   			cin>>no;
	   			cout<<"Enter the OTP sent to your registered mobile number\n";
	   			cin>>no;
	   			cout<<"!!Your Booking is done Successfully!!";
	   			
	   			break;
	   			case 2:
	   				cout<<"You need to consult with your nearby bank for the Demand draft option!!";
	   				break;
	   				
	   				default:
	   					cout<<"Invalid option";
	   					
		   }
	   	
	   }
};
class ferrari:public car
{
	public:
		void carf_data()
		{
			cout<<"\nYou have color choice of Red,Yellow,Black\n";
		}
		
	
		
};
class bmw:public car{
	public:
		void carB_data()
		{
			cout<<"\nYou have color choice of Red,Yellow,Black\n";
		}
		
	
};
class audi:public car{
	public:
		void carA_data()
		{
			cout<<"\nYou have color choice of Red,Yellow,Black,White\n";
		}
	
};
class rolls_royce:public car
{
	public:
		void carR_data()
		{
			cout<<"\nYou have color choice of Red,Yellow,Black,White\n";
		}
};
class jaguar:public car{
	public:
		void carJ_data()
		{
			cout<<"\nYou have color choice of Red,Yellow,Black,Blue\n";
		}
		
};

int main()

{
	/*
	
	initwindow(600,500,"project-oops(car)");
	setbkcolor(WHITE);
	cleardevice();
	readimagefile("Logo.jpg",150,150,500,500);
	getch();
	closegraph();
*/	
	//car c;
	//c.car_details();
//	c.car_attributes();
ferrari f;
f.car_details();
f.car_attributes();
f.car_functions();
f.car_speed();
f.car_roof();
f.car_luxaryseats();
f.car_petrol();
f.car_dashboard();	
f.car_booking();
f.carf_data();
f.car_payment();
f.clear();
system("cls");
cout<<"\n!!Your Booking is done Successfully!!";

bmw b;
b.car_details();
b.car_attributes();
b.car_functions();
b.car_speed();
b.car_roof();
b.car_luxaryseats();
b.car_petrol();
b.car_dashboard();	
b.car_booking();
b.carB_data();
b.car_payment();
b.clear();
system("cls");
cout<<"\n!!Your Booking is done Successfully!!";
audi a;
a.car_details();
a.car_attributes();
a.car_functions();
a.car_speed();
a.car_roof();
a.car_luxaryseats();
a.car_petrol();
a.car_dashboard();	
a.car_booking();
a.carA_data();
a.car_payment();
a.clear();
system("cls");
cout<<"\n!!Your Booking is done Successfully!!";
rolls_royce r;
r.car_details();
r.car_attributes();
r.car_functions();
r.car_speed();
r.car_roof();
r.car_luxaryseats();
r.car_petrol();
r.car_dashboard();	
r.car_booking();
r.carR_data();
r.car_payment();
r.clear();
system("cls");
cout<<"\n!!Your Booking is done Successfully!!";
jaguar j;
j.car_details();
j.car_attributes();
j.car_functions();
j.car_speed();
j.car_roof();
j.car_luxaryseats();
j.car_petrol();
j.car_dashboard();	
j.car_booking();
j.carJ_data();
j.car_payment();
j.clear();
system("cls");
cout<<"\n!!Your Booking is done Successfully!!";





}
