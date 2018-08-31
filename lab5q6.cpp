//to find out whether a given year is leap or not
//include the library
#include<iostream>
using namespace std;
//introduce the main function
int main(){
	//declare a variable for the year
	int a;
	//ask the user for a year from the current calender
	cout<<" Enter any year from the Gregorian calender.. " <<endl;
	//assign the year input to the variable
	cin>>a;
	//define the conditions to check for a leap year
	if(a%4==0||a%400==0)
	{
		cout<<a<<" is a leap year "<<endl;
	}
	else 
		cout<<a<<" is not a leap year "<<endl;
	//terminate the function
return 0;
} 
