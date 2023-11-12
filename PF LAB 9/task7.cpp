#include <iostream>
using namespace std;
main()
{	
	int x;
	cout<<"Enter the number of resistors in the series circuit: ";
	cin>>x;
	float arr[x];
	cout<<"Enter the resistance values (in ohms) of the "<<x<<" resistors, one per line: "<<endl;
	float resistance=0.0;
	for(int i=0;i<x;i++)
	{
	cin>>arr[i];
	resistance=resistance+arr[i];
	}
	cout<<"The total resistance of the series circuit is "<<resistance<<" ohms.";
}
	 
