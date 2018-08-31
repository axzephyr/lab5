//finding the sum of all even numbers between 1 to n 
//include the library
#include<iostream>
using namespace std;
//enter the main function
int main()
{
	//define two variables
	int a=0,n,sum;
	sum=0;
	//ask the user for the value of n
	cout<<" find the sum of all even numbers between 0 to.. "<<endl;
	//capture the input as n
	cin>>n;
	//type in the 'while' loop for the sum
	while (a<n)
	{
		sum=a+sum;
		a=a+2;
	}
	//type out the result, terminate the program
	cout<<" sum of all the even numbers till "<<n<<" is "<<sum<<endl;
return 0;
}
		


