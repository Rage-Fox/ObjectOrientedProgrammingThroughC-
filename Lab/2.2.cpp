#include<iostream>
using namespace std;
inline void fun(int n)
//When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call
{
	cout<<n;
}
int main()
{
	int n;
	cin>>n;
	fun(n);
}