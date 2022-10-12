#include<bits/stdc++.h>
using namespace std;
//same function name in same class with different number of arguments is called as function overloading
class A
{
	public:
		int a,b;
		A()
		{
			a=10;
			b=20;
		}
		void display()
		{
			cout<<a<<" "<<b<<endl;
		}
		void display(int a,int b)
		{
			cout<<a+2<<" "<<b+2<<endl;
		}
};
int main()
{
	A obj1;
	A obj2;
	obj1.display();
	obj2.display(obj2.a,obj2.b);
}