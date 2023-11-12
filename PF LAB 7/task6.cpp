#include<iostream>
using namespace std;
int calculateGCD(int n1,int n2);
int calculateLCM(int n1, int n2 ,int gcd);
main()
{
	int n1;
	cout<<"Enter the first number: ";
	cin>>n1;
	int n2;
	cout<<"Enter the second number: ";
	cin>>n2;
	int gcd=calculateGCD(n1,n2);
	cout<<"GCD: "<<gcd<<endl;
	int lcm=calculateLCM(n1,n2,gcd);
	cout<<"LCM: "<<lcm;
}
int calculateGCD(int n1,int n2)
{
	while(n2!=0)
	{
	int c=n2;
	n2=n1%n2;
	n1=c;
}
return n1;
}
int calculateLCM(int n1, int n2 ,int gcd)
{
	int result=calculateGCD(n1,n2);
	int lcm=(n1*n2)/result;
	return lcm;
}

		
	
	
	
