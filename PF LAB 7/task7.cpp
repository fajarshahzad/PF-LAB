#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int count;
	cout<<"Enter numbers count: ";
	cin>>count;
	int a= count;
	float p1=0, p2=0, p3=0, p4=0, p5=0;
	int number;
	while(count>0)
	{
	cout<<"Enter a number: ";
	cin>>number;
	if(number<=199)
	{
	p1=p1+1;
	}
	else if(number<200||number<400)
	{
	p2=p2+1;
	}
	else if(number<400||number<600)
	{
	p3=p3+1;
	}
	else if(number<600||number<800)
	{
	p4=p4+1;
	}
	else if(number>=800)
	{
	p5=p5+1;
	}
	count=count-1;
	}
	cout<<fixed<<setprecision(2)<<(p1/a)*100<<"%"<<endl;
	cout<<fixed<<setprecision(2)<<(p2/a)*100<<"%"<<endl;
	cout<<fixed<<setprecision(2)<<(p3/a)*100<<"%"<<endl;
	cout<<fixed<<setprecision(2)<<(p4/a)*100<<"%"<<endl;
	cout<<fixed<<setprecision(2)<<(p5/a)*100<<"%"<<endl;
}
	
	
