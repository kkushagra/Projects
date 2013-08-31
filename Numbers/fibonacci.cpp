#include <iostream>
#define ll long long int 

using namespace std;
ll fib(ll);
int main()
{

	ll n;
	cout<<"Enter a number to generate Nth Fibonacci Number: ";
	cin>>n;

	cout<<fib(n)<<endl;

	return 0;
}
ll fib(ll n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
