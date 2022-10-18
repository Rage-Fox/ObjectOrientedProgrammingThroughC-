#include<bits/stdc++.h>
using namespace std;
class student
{
	public:
		string name;
		int marks;
		student(string name="empty",int marks=0)
		{
			this->name=name;
			this->marks=marks;
		}
		void display()
		{
			cout<<name<<" "<<marks<<endl;
		}
};
int main()
{
	student s1("Harsha",1234);
	s1.display();
	student s2;
	s2.display();
}