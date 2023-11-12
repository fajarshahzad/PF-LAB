#include<iostream>
using namespace std;
string removeVowels(string word)
{
	string result;
	for(int i=0;i<word.length();i++)
	{
		if(word[i]!='a'&&word[i]!='e'&&word[i]!='i'&&word[i]!='o'&&word[i]!='u'&&word[i]!='A'&&word[i]!='E'&&word[i]!='I'&&word[i]!='O'&&word[i]!='U')
		result=result+word[i];
	}
	return result;
}
main()
{
	string word;
	cout<<"Enter a string: ";
	getline(cin,word);
	string result=removeVowels(word);
	cout<<"String with vowels removed: "<<result<<endl;
}
	
	
