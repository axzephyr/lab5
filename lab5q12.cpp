//defining the number of days any month has
//include the library
#include<iostream>
using namespace std;
//define the main function
int main(){
	//define a variable for the month number
	int a;
	//ask the user for a valid month number
	cout<<" input a valid month number "<<endl; 
	//capture the inputs
	cin>>a;
	//define the number of days the given month number has
	if (a>12)
	{
		cout<<" the number is not a valid month number "<<endl;
	}
	else if (a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	{
		cout<<" the given month number contains 31 days "<<endl;
	}
	else if (a==4||a==6||a==9||a==11)
	{
		cout<<" the given month number contains 30 days "<<endl;
	}
	else
	
		cout<<" the given month number contains 28 days "<<endl;
	
	//terminate the program
return 0;
}
