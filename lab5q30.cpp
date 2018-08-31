//print the multiplication table of a number
//include the library
#include<iostream>
using namespace std;
//define the main function
int main()
{
	//introduce three variables
	int a,b=1,c;
	//ask the user for the number
	cout<<" find the multipication table for the number "<<endl;
	//capture the input in the variable 'a'
	cin>>a;
	//write the loop to get a multiplication table
	while(b<=20)
	{
		c=a*b;
		cout<<a<<" × "<<b<<" = "<<c<<endl;
		b++;
	}
	//terminate the program
return 0;
}
