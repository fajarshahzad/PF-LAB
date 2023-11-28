#include<iostream>
using namespace std;
string Ship(string arr[5][5],string coordinate);
main()
{
	string arr[5][5];
	string coordinate;
	cout<<"Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
	cin>>coordinate;
	string output=Ship(arr,coordinate);
	cout<<"Result: "<<output;
}
string Ship(string arr[5][5],string coordinate)
{
	if(coordinate=="A4"||coordinate=="A5"||coordinate=="B2"||coordinate=="C2"||coordinate=="D2"||coordinate=="E3"||coordinate=="E4")
	{
		return "BOOM";
	}	
	else
	{
		return "splash";
	}
}
