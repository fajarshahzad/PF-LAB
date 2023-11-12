#include <iostream>
using namespace std;
int calculatePrice(int money, int year);
 main() 
 {
     int money;
	cout<<"Enter money: ";
    cin >> money;
	int year;
	cout<<"Enter Year: ";
	cin>>year;
    int requiredMoney = calculatePrice(money, year);
    if (requiredMoney>0) 
	{
        cout << "Yes! He will live a carefree life and will have " <<requiredMoney<<" dollars left."<< endl;
    } 
	else 
	{	requiredMoney=-requiredMoney;
        cout << "He will need " << requiredMoney <<" dollars to survive."<< endl;
    }

    return 0;
}
int calculatePrice(int money, int year)
{
    int age = 18;
    int requiredMoney = 0;
    for (int currentYear = 1800; currentYear <= year; currentYear++)
 {
        if (currentYear % 2 == 0)
 		{
            requiredMoney =requiredMoney+12000;
        }
 		else
 		{
            requiredMoney =requiredMoney+12000 + 50 * age;
        }
        age++;
   }
    return  money-requiredMoney;
}
