#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class hotel_information
{
	public:
	void display()
	{
		int s,sum=0;
		cout<<"\n\t\t\t\t\tHotel Information\n";
		cout<<"Rules and Regulations:\n";
		cout<<"\n1) The tariff is for the room only and is exclusive of any government taxes applicable Meals and other services are available at extra cost.\n";
		cout<<"\n2) For identification, Aadhar card will be accepted. Xerox of the document will be kept for the record and the original documents will be handed right over. PAN card will not be accepted.\n";
		cout<<"\n3) Company's Lien On Guest's Luggage And Belongings: In the case of default in the payment of dues by a guest, the management shall have the linen on their luggage and belongings, and be entitled to  detain the same and to sell or auction such property at any time without reference to the guest.\n";
		cout<<"\n4) Departure: Check out time is, please inform the reception if you wish to retain your room beyond this time. The extension will be given depending on the availability. If the room is available, the normal tariff will be charged. On failure of the guest to vacate the room on expiry or period the management shall have the right to remove the guest and his/her belongings from the room occupied by the Guest.\n";
		cout<<"\n5) Pets are not allowed.\n";
		cout<<"\n---------------------------------"; 
	}
};
class Booking
{
public:
	char contact[20];
	char no[20];
	int adult;
	int children;
	int room;
	int R;
	char ans;
	char name[50];
	char date[20];
	char check_in[20];
	char check_out[20];
	char email_id[100];
	char Room;
public:
	void Booking_steps()
	{
		
		cout<<"Do you want to go for Advance Booking?(Y/N): ";
		cin>>ans;
		if(ans=='Y' || ans=='y')
		{
			//cout<<"\nHow to do Booking?\n";
			cout<<"1)Fill all the information regarding Booking\n";
			cout<<"\nEnter your name: ";
			cin>>name;
			cout<<"\nEnter your Date of Birth(dd/mm/yyyy): ";
			cin>>date;
			cout<<"\nEnter the contact number: ";
			cin>>contact;
			if(strlen(contact)==10)
			{
                cout<<"\nEnter your Email Id: ";
                cin>>email_id;
                if(strlen(email_id)>=7)
                {
                	cout<<"\n";
                }
                else
                {
                	cout<<"\nPlease valid Email Id!\n";
                }
                cout<<"Enter your Aadhaar number: ";
    			cin>>no;
    			if(strlen(no)==12)
    			{
    				cout<<"Please check your aadhaar number once again!\n";
    		    }
    			else
    			{
    				cout<<"Please Enter a 12 digit Aadhaar number";
    			}
                cout<<"\nEnter Check-in date(DD/MM/YY): ";
			    cin>>check_in;
			    cout<<"\nEnter Check-out date:(DD/MM/YY): ";
			    cin>>check_out;
			    cout<<"\nNumber of adults: ";
			    cin>>adult;
			    cout<<"\nNumber of childrens: ";
			    cin>>children;
			    cout<<"\nSelect the Room AC or Non-AC:";
			    cout<<"\nType 1 for AC";
		        cout<<"\nType 2 for Non-AC";
			    cout<<"\nEnter your choice: ";
			    cin>>R;
			    switch(R)
			    {
				    case 1:
					    cout<<"\nCost of AC room is 2500";
					    cout<<"\nSuccessfully added AC room!";
					    break;
				    case 2:
					    cout<<"\nCost of Non-Ac room is 1500";
				        cout<<"\nSuccessfully added Non-AC room!";
				        break;
				        default:
					    cout<<"You Entered Wronge Choice!!";
			    }
			    cout<<"\nYou fill all the details successfully!!\n";
			    cout<<"\n---------------------------------"; 
                cout<<"\n2)After filling Information you will get a confirmation Email in your register Email Id, PLEASE CHECK!";
			    cout<<"\n---------------------------------"; 
             }
             else
             {
                 cout<<"Please Enter valid 10 digit number";
             }
		}
		else
		{
			cout<<"\n";
		}
	}
	void show()
	{
		cout<<"\nCheck your details\n";
		cout<<"\nCheck-in Date: "<<check_in;
		cout<<"\ncheck-out Date: "<<check_out;
		cout<<"\nNumber of adults: "<<adult;
		cout<<"\nNumber of childrens: "<<children;
		cout<<"\nRoom AC or Non-AC: "<<R;
		if(R==1)
		{
			cout<<"\nYou selected AC room!!";
		}
		else 
		{
			cout<<"\nYou selected Non-AC room!!";
		}
		cout<<"\nIf you want to Edit the details, fill the form again";
		cout<<"\nIf not proceed further";
		
	}
	
};
class vaccination{
	public:
		 
		char first,second,date_first[20],date_second[20],ans,c;
		void info()
		{
			cout<<"Enter Details Regarding Vaccination";
			cout<<"\nYour First dose is completed? (Y/N): ";
			cin>>first;
			if(first=='Y' || first=='y')
			{
				cout<<"\nDate of First Dose taken (dd/mm/yy): ";
			    cin>>date_first;
			    cout<<"\nThank you for the details!\n";
				cout<<"\nYour Second Dose is Completed? (Y/N): ";
			    cin>>second;
			    if(second=='Y' || second=='y')
			    {
				    cout<<"\nDate of Second Dose taken (dd/mm/yy): ";
			        cin>>date_second;
			        cout<<"\nThank you for the details!";
			    }
			    else
			    {
				    cout<<"\nSorry! Your check-in is denied (as per the government guidelines, both the doses are essential)";
			    }
			}
			else //if(first=='n'||first=='n')
			{
				cout<<"\nSorry! Your check-in is denied (as per the government guidelines, both the doses are essential)";
			}
			
			
		}
};
class serfac{
	public:
	void services()
	{
		int choice;
		cout<<"\nServices:\n";
		cout<<"There are Two types of services:";
		cout<<"\n1) World Class services- Rs4000: five star hotel services";
		cout<<"\n2) Mid-Range services- Rs2000: Services which are neither the most expensive nor the cheapest of their type.\n";
		cout<<"\nEnter your choice: ";
		cin>>choice;
        switch(choice)
        {
		case 1:	
		    cout<<"World class Services: With full luxury and five star hotel services\n";
		    cout<<"\nYou applied for World Class Services!\n";
		    cout<<"\n---------------------------------"; 
		    break;
		case 2:
			cout<<"Mid-Range Services: With 3 to 4 star services\n";
			cout<<"\nYou applied for Mid-Range Services!\n";
			cout<<"\n---------------------------------"; 
			break;
		default:
            cout<<"Wrong choice!!!";
            cout<<"\n---------------------------------";
		}
	}
	void facilities()
	{
		int choice,s,sum=0,a[5],i;
		char c,ans;
		do{
		    cout<<"\nWhat are the facilities you want?\n";
		    cout<<"Note: You have to pay Extra Amount as per the facilities you choose";
		    cout<<"\n1) Security- Rs500 per day";
		    cout<<"\n2) Swimming Pool- Rs800 per day";
		    cout<<"\n3) Wifi- Rs50 per day";
		    cout<<"\n4) Gym- Rs400 per day";
		    cout<<"\n5) Exit";
		    cout<<"\nEnter your choice: ";
		    cin>>choice;
            switch(choice)
            {
		        case 1:	
		            cout<<"You applied for security facilities\n";
		            cout<<"Facilities added successfully!";
		            break;
		        case 2:
			        cout<<"You applied for Swimming Pool facilities\n";
			        cout<<"Facilities added successfully!";
			        break;
		        case 3:
		            cout<<"You applied for wifi facilities\n";
		            cout<<"Facilities added successfully!";
		            break;
		        case 4:
		            cout<<"You applied for Gym facilities\n";
		            cout<<"Facilities added successfully!";
			        break;
			    case 5:
			    	cout<<"Exiting....";
			    	break;
		    }
		cout<<"\nDo you want to continue(y/n):";
        cin>>c;
        }
        while(c!='n');
        cout<<"\n---------------------------------"; 
        cout<<"\nTotal:\n";
        cout<<"Did you Select any Facilities? (Y/N): ";
        cin>>ans;
        if(ans=='y'||ans=='Y')
        {
    	    cout<<"\nHow many facilities you selected: "; //2
	        cin>>s;
	        for(i=0;i<s;i++)//i=0,0<2..true,i=1
	        {
		        cout<<"Enter the price of each facilities: ";
		        cin>>a[i];
		        sum=sum+a[i];
	        }
	        cout<<"Total Amount of Facilities you choose: "<<sum;
	    }
	    else
	    {
		    cout<<"\n";
	    }
    }
};

//-----Class Template-----
template <class T>
class Room
{
	T choice;
	T r;
	public:
	    Room_Type()
		{
			T choice;
			T r;
			cout<<"\nRoom Types:\n";
			cout<<"\n1) Single Room - Rs 1000/day";
			cout<<"\n2) Double Room - Rs 1500/day";
			cout<<"\n3) Triple Room -  Rs 1700/day";
			cout<<"\n4) King/Queen Room - Rs 3000/day";
			cout<<"\n5) Villa - Rs 8000/day";
			cout<<"\n6) Adjoining Room - Rs 6000/day ";
			cout<<"\n7) Suite Room - Rs 3000/day ";
			cout<<"\nEnter your choice: ";
		    cin>>choice;
            switch(choice)
            {
                case 1:
                	cout<<"You Added for Single Room!!";
                	break;
                case 2:
                	cout<<"You Added for Double Room!!";
                	break;
                case 3:
                	cout<"You added for Triple Room!!";
                	break;
                case 4:
                	cout<"You added for King/Queen Room!!";
                	break;
                case 5: 
                    cout<<"You added for Villa!!";
                    break;
                case 6: 
                    cout<<"You added for Adjoining Room!!";
                    break;
                case 7: 
                    cout<<"You added for Suite Room!!";
                    break;
			}
			cout<<"\nEnter the number of rooms you want: ";
			cin>>r;
		}
	
};
class food
{
	public:
		void Food()
		{
			int choice,ch,Room_rent,item,price,i,a[100],sum=0;
			char ans,c;
			float total;
			cout<<"Do you want to order Food(Y/N): ";
			cin>>ans;
		    if(ans=='Y' || ans=='y')
		    { 
		        do{
		    	    cout<<"\n1) Starters";
                    cout<<"\n2) Main course";
                    cout<<"\n3) Beverages";
                    cout<<"\n4) Desert";
                    cout<<"\n5) Chef special";
                    cout<<"\nEnter your choices: ";
                    cin>>choice;
                    switch(choice)
                    {
                	    case 1:
                		    cout<<"\nStarters Menu:";
                		    cout<<"\n1) Veg Manchurian- Rs100";
                		    cout<<"\n2) Chicken Lollipop-Rs300";
                		    cout<<"\n3) Chilli Chicken- Rs300";
                		    cout<<"\n4) Chicken 65- Rs400";
                		    cout<<"\n5) Crispy Corn- Rs100";
                		    cout<<"\n6) Veg Fried Rice- Rs100";
                		    cout<<"\n7) Paneer Tikka- Rs80";
                		    cout<<"\n8) Chilli Paneer- Rs90";
                		    cout<<"\n9) Veg Noodles- Rs60";
                		    cout<<"\n10) Manchurian Noodles- Rs150";
                		    cout<<"\nEnter your choice: ";
                		    cin>>ch;
                		    cout<<"\n---------------------------------"; 
                		    cout<<"\nOrdered placed!!";
                		    break;
                        case 2:
                		    cout<<"\nMain Course Menu:\n ";
                		    cout<<"\n1) Butter Chicken- Rs500";
                		    cout<<"\n2) Palak Panner- Rs300";
                		    cout<<"\n3) Rogan Josh (Mutton/Lamb in a Kashmiri chilli pepper gravy)- Rs800";
                		    cout<<"\n4) Grilled Chicken with Fresh Cherry Salsa- Rs600";
                		    cout<<"\n5) Kadai Chicken- Rs500";
                		    cout<<"\n6) Rajma Chawal- Rs300";
                		    cout<<"\n7) Chana Masala- 130";
                		    cout<<"\n8) Roti- Rs30";
                		    cout<<"\n9) Tandoori Roti- Rs50";
                		    cout<<"\n10) Butter Naan- Rs70\n"; 
                		    cout<<"\nEnter your choice: ";
                		    cin>>ch;
                		    cout<<"\n---------------------------------";
                		    cout<<"\nOrdered placed!!";
                		    break;
                	    case 3:
                		    cout<<"\nBeverages: ";
                		    cout<<"\n1) Container Orange- Rs40";
                		    cout<<"\n2) Container Lychee- Rs50";
                		    cout<<"\n3) Lychee Ice Tea- Rs100";
                		    cout<<"\n4) Strawberry Sensation- Rs60 ";
                		    cout<<"\n5) Green Garden (Milk Sprite Melon Syrup Lime)- Rs100";
                		    cout<<"\n6) Container Blueberry- Rs80";
                		    cout<<"\n7) Fresh Lime- Rs50";
                		    cout<<"\n8) Beer- Rs200";
                		    cout<<"\n9) Wine- Rs500";
                		    cout<<"\n10) Coctail- 1000\n";
                		    cout<<"\nEnter your choice: ";
                		    cin>>ch;
                		    cout<<"\n---------------------------------";
                		    cout<<"\nOrdered placed!!";
                		    break;
                	    case 4:
                		    cout<<"\nDessert";
                		    cout<<"\n1) Mocha Mud Pie- Rs300";
                		    cout<<"\n2) Lemon Cake- Rs400";
                		    cout<<"\n3) Snickers Pie- Rs100";
                		    cout<<"\n4) Chocolate Fudge Brownie- Rs150";
                		    cout<<"\n5) Cheesecake Brownie- Rs250";
                		    cout<<"\n6) Nutella Mousse- Rs200";
                		    cout<<"\n7) Gullab Jamun- Rs50(Two)";
                		    cout<<"\n8) Ras Malai- Rs70";
                		    cout<<"\n9) Mongo Kulfi- Rs30";
                		    cout<<"\n10) Ice cream- Rs40\n";
                		    cout<<"\nEnter your choice: ";
                		    cin>>ch;
                		    cout<<"\n---------------------------------";
                		    cout<<"\nOrdered placed!!";
                		    break;
                	    case 5:
                		    cout<<"\nChef Special:\n";
                		    cout<<"\n1) Raita Smoothie- Rs100";
                		    cout<<"\n2) Iced Turmeric Tea- Rs150";
                		    cout<<"\n3) Achari Paneer- Rs500";
                		    cout<<"\n4) Lucknowi Mutton Biryani- Rs750";
                		    cout<<"\n5) Hydrabadi Biryani- Rs700";
                		    cout<<"\n6) Chicken peri peri- Rs500";
                		    cout<<"\n7) Pull Apart Dabeli- Rs100";
                		    cout<<"\n8) Dhabe Di Dal- Rs100";
                		    cout<<"\n9) Stir-fried Exotic Oriental Vegetable Recipe- Rs600";
                		    cout<<"\n10) Garlic Mushrooms- Rs400\n";
                		    cout<<"\nEnter your choice: ";
                		    cin>>ch;
                		    cout<<"\n---------------------------------";
                		    cout<<"\nOrdered placed!!";
                		    break;
                    }
                    cout<<"\nDo you want to continue(y/n):";
                    cin>>c;
               }
                while(c!='n');
                cout<<"\n\n";
			    cout<<"\nFood Bill:\n";
                cout<<"How many items you ordered: "; 
		        cin>>item;
		        for(i=0;i<item;i++)
		        {
		    	    cout<<"Enter the price of each Item: ";
		    	    cin>>a[i];
		    	    sum=sum+a[i];
			    }
			    cout<<"\n---------------------------------";
			    cout<<"\nTotal Food bill:"<<sum;
			    //cout<<"\n---------------------------------";
		    }
			else
			{
				cout<<"Exiting...";
			}
		}
};

class Bill
{
	int Room_Type,days,s,faci,f,Total,r,p;
	char ans;
	public:
		void Total_bill()
		{
			cout<<"\nBill: \n";
			cout<<"\nEnter the number of Rooms you selected: ";
			cin>>r;
			//-----Exceptional Handling------
			try
			{
				if (r == 0)
                {
                    throw r;//(throw an exception)
                }
			}
			catch (int r)
			{
				cout << "\nException! please enter a valid number\n";
				cout<<"\nEnter the number of Rooms you selected: ";
				cin>>r;
			}
			cout<<"\nEnter the price of room you selected (AC: 2500/Non-AC: 1500): ";
			cin>>p;
			cout<<"\nEnter the Room Type price: ";
			cin>>Room_Type;
			cout<<"(If you are not selected any Room go to option Room Type and Room booking)\n";
		    cout<<"\nEnter the number of days you stayed: ";
			cin>>days;
			cout<<"\nEnter the Services Price you selected(World Class: Rs4000/Mid-Range: Rs2000): ";
			cin>>s;
			cout<<"\nDid you Select facilities(Y/N): ";
			cin>>ans;
			if(ans=='Y' || ans=='y')
			{
				cout<<"\nEnter the Total Price of Facilities you choose: ";
			    cin>>faci;
			}
			else 
			{
				cout<<"\n"; 
			}
			cout<<"\nEnter the Food total(if you not ordered any food till now, enter 0): ";
			cin>>f;
			cout<<"\n---------------------------------"; 
		}
		//-------Friend Function-------
		friend void BillAmount(Bill &Total);
		
	void total()
	{
	   cout<<"\nTotal Bill: "<<Total;
	   
	}
};
void BillAmount(Bill &t)
{
	t.Total = (t.Room_Type + t.p + t.s + t.faci + t.f) * t.r * t.days;	
}

class Advance_payment
{
	public:
	void AdvancePay()
	{
		int t;
		char ans;
		float total;
	    cout<<"Do you want to go for Advance Payment(Y/N): ";
	    cin>>ans;
		if(ans=='Y' || ans=='y')
		{
			cout<<"Enter your Total Bill Amount: ";
			cin>>t;
			total= t/4;
			cout<<"\nPay 25%(advance payment) from the Total Bill: "<<total;
			
		}
		else
		{
			cout<<"Enter your Total Bill Amount: ";
			cin>>t;
			//cout<<"\nThank You!!";
		}
	}
	void payment()
	{
	    int choice;
	    cout<<"\n\nPayment Method:\n";
	    cout<<"\n1) Online Payment\n";
	    cout<<"\n2) Cash Payment\n";
        cout<<"\nEnter your choice: ";
	    cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Pay with UPI Net Banking";
                cout<<"\n\n\t**THANKYOU**";
                break;
            case 2:
                cout<<"Pay with Cash Payment";
                cout<<"\n\n\t**THANKYOU**";
                break;
	        }    
		}
};
//-------Virtual Function------
class Base  
{
    public:  
    virtual void customer_function()=0;  
}; 
class Derived : public Base  
{   
    int rate ,choice;
    char suggestion[50], ans;	 
    public:  
    void customer_function()  
    {  
    	
        cin.get();
        cout<<"\nPlease drop your suggestions: ";
		cin.getline(suggestion,50);
		do{
		    cout<<"\nRate our service out of 5: ";
		    cin>>rate;
		    if(rate>5)
		    {
			    cout<<"\nInvalid rating";
		    }
		    else
		    {
			    cout<<"\n---------------------------------"; 
			    cout<<"\nThis Project is done by \n";
	            cout<<"----------------------------------------------------------\n";
	            cout<<" Roll no. : 12\n Name: Ishika Kumbhare\n Section: B(Batch B1)\n";
	            cout<<"----------------------------------------------------------\n";
			    cout<<"\n>>>>>>>>THANK YOU<<<<<<<<";
		    }
		}
		while(rate>5 || rate<0);
	}
}; 
main()
{
	int choice;
	char c;
	cout<<"\n\t\t\t\t\t\t\t  ****************************\n";
	cout<<"\t\t\t\t\t\t\t     HOTEL MANAGEMENT SYSTEM";
	cout<<"\n\t\t\t\t\t\t\t  ****************************\n";
	while(1)
	{
		do{
	    cout<<"\n MENU: ";
	    cout<<"\n1) Hotel Information ";
	    cout<<"\n2) Advance Booking";
	    cout<<"\n3) Fill Vaccination Details";
	    cout<<"\n4) Services and facilities";
	    cout<<"\n5) Room Types and Room Booking";
	    cout<<"\n6) Food";
	    cout<<"\n7) Billing";
	    cout<<"\n8) Payment";
        cout<<"\n9) Reviews and Suggestion";
        cout<<"\n10) Back to Main Menu";
	    cout<<"\nEnter your choice: ";
	    cin>>choice;
        switch(choice)
        {
            case 1:	
		        hotel_information obj1;
		        obj1.display();
		        break;
	        case 2:
			    Booking obj2;
	            obj2.Booking_steps();
	            obj2.show();
			    break;
		    case 3:
			    vaccination obj3;
			    obj3.info();
			    break;
			case 4:
				serfac obj8;
				obj8.services();
	            obj8.facilities();
	            break;
		    case 5:
		    	Room<int> obj4;
			    obj4.Room_Type();
			    break;
		    case 6:
		    	food obj5;
		        obj5.Food();
		        break;
		    	//payment::Total_bill();
	        case 7:
		     	Bill obj6;
	            obj6.Total_bill();
	            BillAmount(obj6);
	            obj6.total();
			    break;
			case 8:
				Advance_payment obj7;
				obj7.AdvancePay();
				obj7.payment();
				break;
			case 9: 
		        Base *bptr;  
                Derived d;  
                bptr = &d;
                cout<<"\n**WELCOME TO REVIEWS AND SUGGESTION PAGE**";
                bptr->customer_function(); 
 	            //return 0; 
 	            break;
		}
		//cout<<"\nDo you want to Go for Main Menu(y/n):";
        //cin>>c;
        cout<<"\n---------------------------------"; 
    }
        while(c!='n');
        cout<<"\n\n";
        exit(0);
  }
	return 0;
}
