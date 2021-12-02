#include "Header.h"
#include "alcohol.h"

int addID(list<alcohol>& drinks)
{
	bool cond = true;
	int id = 0;
	while (cond == true)
	{
		cond = false;
		id = rand() % 9999 + 399;
		for (auto temp : drinks)
		{
			if (temp.get_ID() == id)
			{
				cond = true;
				break;
			}
		}
	}
	return id;
}
int checkmain(int a)
{
	bool success = true;
	while (success)
	{
		if (cin.peek() != '\n' || a <= 0)
		{
			cin.clear();
			cin.ignore(3333333, '\n');
			cout << "Ошибка, повторите ввод!" << endl;
			cin >> a;
		}
		else
			success = false;
	}
	return a;
}


alcohol addDrink(list<alcohol> drinks)
{
	alcohol temp;
	temp.input();
	temp.set_ID(addID(drinks));
	return temp;
}
void sortbyPrice(list<alcohol>& drinks)
{
	int choise;
	cout << "Oтсортировать по убыванию - 1" << "\nОтсортировать по возрастанию - 2" << endl;
	cin >> choise;
	if (choise == 1)
	{
		drinks.sort([](alcohol& a, alcohol& b) { return a.get_Price() > b.get_Price(); });
	}
	else if (choise == 2)
	{
		drinks.sort([](alcohol& a, alcohol& b) { return a.get_Price() < b.get_Price(); });
	}
	else
		cout << "Такого варианта нет" << endl;
}
void deleteDrinks(int id, list<alcohol>& drinks)
{
	auto it = drinks.begin();
	auto prev = drinks.cbegin();
	for (auto it = drinks.begin(); it != drinks.end(); ++it)
	{

		if (*it == id)
		{
			drinks.erase(prev);
			break;
		}
		prev = it;
	}
}

void insertDrink(list<alcohol>& drinks)
{
	int id;
	auto it = drinks.begin();
	alcohol ins_obj;
	ins_obj.input();
	ins_obj.set_ID(addID(drinks));
	cout << "Введите ID напитка после которого хотите добавить " << endl;
	cin >> id;
	checkmain(id);
	for (auto number : drinks)
		if (number.get_ID() == id)
		{
			drinks.insert(++it, ins_obj);
			break;
		}
}


