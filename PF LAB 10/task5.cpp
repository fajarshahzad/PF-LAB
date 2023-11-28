#include <iostream>
using namespace std;
int countIdenticalRows(int arr[][3], int numRow);
 main() {
    int col=3;
	int numRow;
	cout<<"Enter the number of rows for the array: ";
	cin>>numRow;
	int arr[numRow][3];
	cout<<"Enter the elements of the array:"<<endl;
	for(int i=0;i<numRow;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
			cin>>arr[i][j];
		}
	}
    int identicalRowcount=countIdenticalRows(arr,numRow);
    cout << "The count of identical rows in the array is: " << identicalRowcount << endl;
}
int countIdenticalRows(int arr[][3], int numRow)
{
    int identicalRowCount = 0;
    for (int i = 0; i < numRow-1 ; i++) 
	{
        for (int j = i + 1; j <numRow; j++) 
		{
            bool isIdentical = true;

            for (int k = 0; k < 3; k++) 
			{
                if (arr[i][k] != arr[j][k]) 
				{
                    isIdentical = false;
                    break;
                }
            }
            if (isIdentical) 
			{
                identicalRowCount++;
            }
        }
    }

    return identicalRowCount;
}
