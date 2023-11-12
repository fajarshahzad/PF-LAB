#include<iostream>
using namespace std;
int frequencyChecker(int number,int digit);
main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	int digit;
	cout<<"Enter the digit to check: ";
	cin>>digit;
	int result=frequencyChecker(number,digit);
	cout<<"Frequency: "<<result;
}
int frequencyChecker(int number,int digit)
{
	int a=0;
	if(number<0)
	{
	number=-number;
	}
	while(number>0)
	{
	int b=number%10;
	if( b== digit)
		{
		a++;
		}
	number=number/10;
	}
	return a;
}

	
