//include the library
#include<iostream>
using namespace std;
//declare the main function
int main(){
	//define three variables
	int a,b,c;
	//ask the user for the values of the variables
	cout <<" Input any three numbers "<<endl;
	//capture the inputs
	cin >>a>>b>>c;
	//write down the conditions to compare the variables
	if (a>b&&b>c)
	{
		cout<<" The greatest number is "<<a<<endl;
	}
	else if (a<b&&b>c)
	{
		cout<<" The greatest number is "<<b<<endl;
	}
	else
		cout<<" The greatest number is "<<c<<endl;
	//terminate the function
return 0;
}


