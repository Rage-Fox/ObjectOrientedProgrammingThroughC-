#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Bank
{
	int pin;
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
	void display()
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
};
int main()
{
	Bank person("Sudhir","SBI007","Kakinada","SBI",1234,5678,1010,100000000000);
	person.display();
}