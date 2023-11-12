#include<iostream>
using namespace std;
void printReverseArray(int arr[],int n)
{
	for(int i=n-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int x;
	cout<<"Enter the number of elements: ";
	cin>>x;
	if(x<=0)
	{
		cout<<"Invalid input. Number of elements must be greater than 0."<<endl;
		return 0;
	}
	int arr[x];
	cout<<"Enter "<<x<<" numbers , one per line:"<<endl;
	for(int i=0;i<x;i++)
	{
	cin>>arr[i];
	}
	cout<<"Numbers in reverse order: ";
	printReverseArray(arr,x);
	return 0;
}
