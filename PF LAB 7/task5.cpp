#include<iostream>
using namespace std;
int digitSum(int number);
main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	int result=digitSum(number);
	cout<<"Sum of digits: "<<result;
}
int digitSum(int number)
{
	int sum=0;
	if(number<0)
	{
	number=-number;
	}
	while(number>0)
	{
	sum=sum+(number%10);
	number=number/10;
	}
	return sum;
}
