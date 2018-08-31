//include the library
#include<iostream>
using namespace std;
//declare the main function
int main(){
	//declare the variables
	int a,b;
	//ask the user for two numbers
	cout <<" choose any two numbers "<<endl;
	//capture the varables
	cin >>a>>b;
	//put in the condition for defining greater than or smaller than
	if (a>b)
	{
		cout<<a<<" is greater than "<<b<<endl;
	}
	else
		cout<<b<<" is greater than "<<a<<endl;
	//terminate the program
return 0;
}
