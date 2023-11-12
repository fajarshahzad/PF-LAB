#include<iostream>
using namespace std;
main()
{
	float quarter,dime,nickel,penny,totalAmount;
	cout<<"Enter quarters: ";
	cin>>quarter;
	cout<<"Enter dimes: ";
	cin>>dime;
	cout<<"Enter nickels: ";
	cin>>nickel;
	cout<<"Enter pennies: ";
	cin>>penny;
	cout<<"Enter the total amount due: $";
	cin>>totalAmount;
	string result;
	float money=(quarter*0.25+dime*0.10+nickel*0.05+penny*0.01);
	if(money>=totalAmount)
	{
	result="Yes";
	}
	else
	{
	result="No";
	}
	cout<<"Can you pay the amount? "<<result;
}
	
