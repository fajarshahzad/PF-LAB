#include<iostream>
using namespace std;
bool  isSpecialArray(int size,int arr[])
{

	for (int i = 0; i < size; i++) 
	{
    if ((i % 2 == 0 && arr[i] % 2 == 0) || (i % 2 != 0 && arr[i] % 2 != 0)) 
	{
            return true;
      	 }
	}
	return false;
}
main()
{
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter "<<size<<" elements of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	if(isSpecialArray(size,arr))
	{
	cout<<"The array is special";	
	}
	else
	cout<<"The array is not special";
}
	
	
