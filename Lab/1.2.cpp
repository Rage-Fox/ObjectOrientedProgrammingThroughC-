#include<iostream>
#include<cmath>
using namespace std;
class fact
{
	public:
	int find_fact(int n)
	{
		if(n==1)
		{
			return 1;
		}
		return n*find_fact(n-1);
	}
};
int main()
{
	int n;
	cin>>n;
	fact f;
	cout<<f.find_fact(n);
}