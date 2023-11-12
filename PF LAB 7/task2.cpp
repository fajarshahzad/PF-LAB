#include<iostream>
using namespace std;
void generateFibonacci(int length);

main()
{
	int length;
	cout<<"Enter the length of the Fibonacci series: ";
	cin>>length;
	generateFibonacci(length);

}
void generateFibonacci(int length)
{
	int n1=0;
	int n2=1;
	if(length>=1)
	{
		cout<<n1<<", ";
	}
	if(length>=2)
	{
		cout<<n2<<", ";
	}
	int next;
	for(int x=0;x<length-2;x++)
	{
	next=n1+n2;
	cout<<next;
	if(x<length-3)
	{
		cout<<", ";
	}
	n1=n2;
	n2=next;
}
}
	
