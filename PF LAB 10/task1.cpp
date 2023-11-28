#include<iostream>
using namespace std;
void PrintSum(int arr[][3],int rowSize);	
main()
{
	int rowSize; 
	cout<<"Enter row size: ";
	cin>>rowSize;
	cout<<"Enter the elements of the matrix: "<<endl;
	int arr[rowSize][3];
	PrintSum(arr,rowSize);
}
void PrintSum(int arr[][3],int rowSize)
{
	int sum=0;
	for(int i=0;i<rowSize;i++)
	{
	for(int j=0;j<3;j++)
	{
	cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
	cin>>arr[i][j];
	sum=sum+arr[i][j];
	}
	}
	cout<<"The sum of elements in the matrix is: "<<sum;
}
 
