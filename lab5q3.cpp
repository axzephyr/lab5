//Checking the signum function of a variable
//include the library
#include<iostream>
using namespace std;
//declare the main function
int main(){
	//define a variable
	int a;
	//ask the user for any number to assign it to the variable
	cout <<" Check the modulus of the number.. "<<endl;
	//assign the input to the variable
	cin >>a;
	//write the conditions for the signum function
	if(a>0)
	{
		cout<<" The number is positive "<<endl;
	}
	else if(a==0)
	{
		cout<<" The number is zero!!! "<<endl;
	}
	else
		cout<<" The number is negative "<<endl;
	//terminate the program
return 0;
}

