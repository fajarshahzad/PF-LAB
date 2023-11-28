#include<iostream>
using namespace std;
main()
{
	int count=0;
	int row=3;
	int col=3;
	int arr[row][col];
	cout<<"Enter the elements of the matrix: "<<endl;
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<col;j++)
	{
	cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
	cin>>arr[i][j];
	}
	}
	cout<<"The matrix you entered is: "<<endl;
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<col;j++)
	{
		cout<<arr[i][j]<<"\t";
	}
	cout<<endl;
	}
	if(arr[0][0]==1&&arr[0][1]==0&&arr[0][2]==0)
	{
		count++;
	}
	if(arr[1][0]==0&&arr[1][1]==1&&arr[1][2]==0)
	{
		count++;
	}
	if(arr[2][0]==0&&arr[2][1]==0&&arr[2][2]==1)
	{
		count++;
	}	
	if(count==row)
	{
		cout<<"The entered matrix is an identity matrix.";
	}
	else
	{
		cout<<"The entered matrix is NOT an identity matrix.";
	}
}
	

