#include<iostream>
using namespace std;
string reversedWord(string word);
main()
{
	string word;
	cout<<"Enter a String: ";
	getline(cin,word);
	string result=reversedWord(word);
	cout<<"Shifted String: "<<result;
}
string reversedWord(string word)
{
	for(int i=0;i<word.length();i++)
	{
	if(isalpha(word[i]))
	{
	if(word[i]=='z')
	{
	word[i]='a';
	}
	else if(word[i]=='Z')
	{
	word[i]='A';
	}
	else
	{
	word[i]++;
	}
}
}
return word;
}
	



