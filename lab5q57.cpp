// Write a C++ program to print Fibonacci series up to n. 
//include the library
#include<iostream>
using namespace std;
//enter the main function
int main()
{
	//define four variables
	int a=1,b=1,c,n;
	c=0;
	//ask the user for the value of n
	cout<<" print the fibonacci sequence upto.. "<<endl;
	//capture the variable n
	cin>>n;
	cout<<a<<endl;
	cout<<b<<endl;
	while(c<=n)
	{
		c=a+b;
		cout<<c<<endl;
		a=b;
		b=c;
	}
	
return 0;
}

