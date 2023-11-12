#include<iostream>
using namespace std;
bool doesBrickFit(int a, int b, int c, int w, int h);
main()
{
	int a,b,c,w,h;
	cout<<"Enter the height of brick: ";
	cin>>a;
	cout<<"Enter the width of brick: ";
	cin>>b;
	cout<<"Enter the depth of brick: ";
	cin>>c;
	cout<<"Enter the width of the hole: ";
	cin>>w;
	cout<<"Enter the height of the hole: ";
	cin>>h;
	cout<<doesBrickFit(a,b,c,w,h);
}
bool doesBrickFit(int a,int b,int c,int w,int h)
{
	int brickSize=a*b*c;
	int holeSize=2*h*w;
	if(brickSize<=holeSize)
	{
	return true;
	}
	return false;
}
