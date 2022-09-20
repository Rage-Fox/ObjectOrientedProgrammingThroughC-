#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Bank
{
	int pin;//private variable
	public:
		string name,ifsc,branch,bankname;
		ll accno,cardno,balance;
	Bank(string name,string ifsc,string branch,string bankname,ll accno,ll cardno,ll pin,ll balance)
	{
		this->name=name;
		this->ifsc=ifsc;
		this->branch=branch;
		this->bankname=bankname;
		this->accno=accno;
		this->cardno=cardno;
		this->pin=pin;
		this->balance=balance;
	}
	void viewdetails()
	{
		cout<<name<<endl;
		cout<<ifsc<<endl;
		cout<<branch<<endl;
		cout<<bankname<<endl;
		cout<<accno<<endl;
		cout<<cardno<<endl;
		cout<<pin<<endl;
		cout<<balance<<endl;
	}
	ll getpin()
	{
		return pin;
	}
	void displayamount()
	{
		cout<<balance<<endl;
	}
	void depositamount()
	{
		ll amt;
		cin>>amt;
		balance+=amt;
		cout<<"The balance is: "<<balance<<endl;
	}
	void withdrawamount()
	{
		int amt;
		cin>>amt;
		if(balance-amt>=2000)//minimum of 2000 has to be in bank account
		{
			balance-=amt;
			cout<<"The balance is: "<<balance<<endl;
		}
		else
		{
			cout<<"Withdraw not possible"<<endl;
		}
	}
	void pinchange()
	{
		ll newpin;
		cin>>newpin;
		if(newpin==pin)
		{
			cout<<"Old and New PIN are same"<<endl;
		}
		else
		{
			pin=newpin;
			cout<<"PIN has changed"<<endl;
		}
	}
};
int main()
{
	Bank person("Harsha","BOB999","Blank Place","BOB",1234,5678,1010,10000);
	cout<<"Welcome to Bank of Blank"<<endl;
	ll pin;
	cout<<"Enter PIN: ";
	cin>>pin;
	if(pin==person.getpin())
	{
		while(1)
		{
			cout<<"1.View Amount 2.Deposit Amount 3.Withdraw Amount 4.PIN change 5.View details 6.Exit"<<endl;
			int ch;
			cin>>ch;
			if(ch==1)
			{
				person.displayamount();
			}
			else if(ch==2)
			{
				person.depositamount();
			}
			else if(ch==3)
			{
				person.withdrawamount();
			}
			else if(ch==4)
			{
				person.pinchange();
			}
			else if(ch==5)
			{
				person.viewdetails();
			}
			else
			{
				cout<<"Thank you for using our bank services";
				break;
			}
		}
	}
	else
	{
		cout<<"Invalid PIN";
	}
}