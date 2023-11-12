#include <iostream>
using namespace std;
int calculateMoney(int age, int price, int unitPrice);

int main()
{
    int age, price, unitPrice;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> price;
    cout << "Enter the unit price of each toy: ";
    cin >> unitPrice;
    int result = calculateMoney(age, price, unitPrice);
    if(result >= price)
    {
        int n = result - price;
        cout<<"Yes!"<<endl<<n;
    }
    if(result < price)
    {
        int m = price - result;
        cout<<"No!"<<endl<<m;
    }
}
int calculateMoney(int age, int price, int unitPrice)
{
    int savedMoney=0;

    for (int i = 2; i <= age; i=i+2) 
	{
        savedMoney += 10 * (i / 2);
        savedMoney = savedMoney - 1; 
    }
    int toyIncome = (age / 2) * unitPrice ;
    savedMoney += toyIncome;
    return savedMoney;
}