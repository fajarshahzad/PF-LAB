#include<iostream>
using namespace std;
void LargestMatrixSwap(int arr[][5],int row);
main()
{
	int col=5;
	int row;
	cout<<"Enter row size: ";
	cin>>row;
	int arr[row][5];
	cout<<"Enter the elements of the matrix: "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
			cin>>arr[i][j];
		}
	}
	cout<<endl;	
	cout<<"Original Matrix:"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	cout<<endl;
	}
	LargestMatrixSwap(arr,row);
}
void LargestMatrixSwap(int arr[][5],int row)
{
	int max=0;
	int maxIdx=0;
	for(int j=0;j<5;j++)
	{
	if(arr[0][j]>max)	
	{
		max=arr[0][j];
		maxIdx=j;
	}
	}	
	int j=0;
	for(int i=0;i<3;i++)
	{
		int temp=arr[i][j];
		arr[i][j]=arr[i][maxIdx];
		arr[i][maxIdx]=temp;
	}
	cout<<endl;
	cout<<"Matrix after largest column moved to first:"<<endl;
	for(int idx=0;idx<row;idx++)
	{
		for(int x=0;x<5;x++)
		{
		cout<<arr[idx][x]<<" ";
		}
		cout<<endl;
	}
	}	

