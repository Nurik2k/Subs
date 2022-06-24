#include <iostream>
#include <list>
#include "Sub.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	list<Sub> subs;
	Sub number1, number2, number3;
	number1.set_num(41002003, 1034, 2345, 1000, 200);//номер карты , ид номер, дебет, кредит, время
	number1.set_all("Сейсенбай", "Нуржан", "Ермекулы", "Пушкина 23/1");
	number2.set_num(41002034, 1051, 3990, 1234, 300);
	number2.set_all("Алавяный", "Александр", "Валентинович", "Абай 23/1");
	number3.set_num(41002057, 3057, 5990, 4503, 500);
	number3.set_all("Камышева", "Амина", "Александровна", "Орбита 3");
	subs.push_back(number1);
	subs.push_back(number2);
	subs.push_back(number3);
	subs.sort();
	for (auto i : subs) {
		
		cout << i;
	}
	
	return 0;
}
