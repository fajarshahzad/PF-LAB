#include<iostream>
using namespace std;
float calculateDamage(string type, string opponentType,int attack,int defense);
main()
{
	string type,opponentType;
	int attack,defense;
	cout<<"Enter your type: ";
	cin>>type;
	cout<<"Enter Opponent's type: ";
	cin>>opponentType;
	cout<<"Enter your power attack: ";
	cin>>attack;
	cout<<"Enter opponent,s defense: ";
	cin>>defense;
	cout<<calculateDamage( type,  opponentType, attack, defense);
}
float calculateDamage(string type, string opponentType, int attack,int defense)
{
	int damage;
	if(type=="water")
{
	if(opponentType=="fire")
	{
	int effectiveness=2;
	return damage=50*(attack/defense)*2;	
	}
	if(opponentType=="grass")
	{
	int effectiveness=0.5;
	return damage=50*(attack/defense)*0.5;
	}
	if(opponentType=="electric")
	{
	int effectiveness=0.5;
	return damage=50*(attack/defense)*0.5;
	}
}
	if(type=="fire")
{
	if(opponentType=="grass")
	{
	int effectiveness=2;
	return damage=50*(attack/defense)*2;
	}
	if(opponentType=="water")
	{
	int effectiveness=0.5;
	return damage=50*(attack/defense)*0.5;
	}
	if(opponentType=="electric")
	{
	int effectiveness=1;
	return damage=50*(attack/defense)*1;
	}
}
	if(type=="grass")
{
	if(opponentType=="fire")
	{
	int effectiveness=0.5;
	return damage=50*(attack/defense)*0.5;
	}
	if(opponentType=="water")
	{
	int effectiveness=2;
	return damage=50*(attack/defense)*2;
	}
	if(type=="electric")
	{
	int effectiveness=1;
	return damage=50*(attack/defense)*1;
	}
}
	if(type=="electric")
{
	if(opponentType=="fire")
	{
	int effectiveness=1;
	return damage=50*(attack/defense)*1;
	}
	if(opponentType=="water")
	{
	int effectiveness=2;
	return damage=50*(attack/defense)*2;
	}
	if(opponentType=="grass")
	{
	int effectiveness=1;
	return damage=50*(attack/defense)*1;
	}
}
}




