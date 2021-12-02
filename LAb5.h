#include "Header.h"
#include "alcohol.h"

alcohol addDrink(list<alcohol>);
void sortbyPrice(list<alcohol>&);
int addID(list<alcohol>&);
int checkmain(int);
void deleteDrinks(int, list<alcohol>&);
void insertDrink(list<alcohol>&);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x=0, indx;
	list<alcohol> drinks;
	do {
		
	 cout << "1 - добавить элемент в список\n"
			 "2 - посмотреть список\n"
			 "3 - перевернуть список\n" 
			 "4 - отсортировать список по цене\n" 
			 "5 - удалить элемент из списка\n" 
			 "6 - вставить элемент в список" << endl;
		cin >> x;
		cin.ignore();
		switch (x) {
		case 1:
			system("CLS");
			drinks.push_back(addDrink(drinks));
			break;
		case 2:
			if (drinks.empty())
			{
				system("CLS");
				cout << "List is clear" << endl;
				break;
			}
			system("CLS");
			for (auto number : drinks)
				number.output();
			break;
		case 3:
			system("CLS");
			if (drinks.empty())
			{
				system("CLS");
				cout << "List is clear" << endl;
				break;
			}
			drinks.reverse();
			break;
		case 4: 
			system("CLS");
			if (drinks.empty())
			{
				system("CLS");
				cout << "List is clear" << endl;
				break;
			}
			sortbyPrice(drinks);
			break;
		case 5:
			system("CLS");
			if (drinks.empty())
			{
				system("CLS");
				cout << "List is clear" << endl;
				break;
			}
			cout << "Удалить элемент списка - 1\nУдалить весь список 2" << endl;
			cin>>x;
			x = checkmain(x);
			if (x == 1)
			{
				cout << "Enter a Index of element" << endl;
				cin >> indx;
				indx = checkmain(indx);
				deleteDrinks(indx, drinks);
			}
			else
			{
				drinks.clear();
			}
			break;
		case 6:
			system("CLS");
			if (drinks.empty())
			{
				system("CLS");
				cout << "List is clear" << endl;
				break;
			}
			insertDrink(drinks);
			break;
		case 7:
			system("CLS");
			drinks.clear();
			return 0;
		};
	} while (x != 7);
	
}