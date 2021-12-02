#include "alcohol.h"

void alcohol::set_Name(string Name)
{
	this->Name = Name;
}
void alcohol::set_Type(string Type)
{
	this->Type = Type;
}
void alcohol::set_Strength(int Strength)
{
	this->Strength= Strength;
}

void alcohol::set_Price(int Price)
{
	this->Price = Price;
}

void alcohol::set_Capacity(int Capacity)
{
	this->Capacity = Capacity;
}

void alcohol::set_ID(int ID)
{
	this->ID = ID;
}

string alcohol::get_Name()
{
	return Name;
}

string alcohol::get_Type()
{
	return Type;
}

int alcohol::get_Strength()
{
	return Strength;
}

int alcohol::get_Price()
{
	return Price;
}

int alcohol::get_Capacity()
{
	return Capacity;
}

int alcohol::get_ID()
{
	return ID;
}

void alcohol::output()
{
	cout << "�������� �������: " <<
		get_Name() << "\n��� �������: " <<
		get_Type() << "\n���-�� ��������: " <<
		get_Strength() << "\n����� (��): " <<
		get_Capacity() << "\n����(�����): " <<
		get_Price() << "\nID: " <<
		get_ID() << "\n " << endl;
		
}

void alcohol::input()
{
	string tmp;
	int a;
	cout << "������� �������� �������: " << endl;
	getline(cin, tmp, '\n');
	set_Name(tmp);
	cout << "���(�������� ����, ���� � ��.): " << endl;
	getline(cin, tmp, '\n');
	set_Type(tmp);
	cout << "��������(� ��������): " << endl;
	cin >> a;
	a = checking(a);
	set_Strength(a);
	cout << "�����(� �����������): " << endl;
	cin >> a;
	a = checking(a);
	set_Capacity(a);
	cout << "����(� ������): " << endl;
	cin >> a;
	a = checking(a);
	set_Price(a);
	cin.ignore();
}

int alcohol::checking(int a)
{
	bool success = true;
	while (success)
	{
		if (cin.peek() != '\n' || a <= 0)
		{
				cin.clear();
				cin.ignore(3333333, '\n');
				cout << "������, ��������� ����!" << endl;
				cin >> a;
		}
			else
				success = false;
	}
		return a;

}

alcohol::alcohol()
{
	Name = "����� �������";
	Type = "����";
	Strength = 8;
	Price = 3;
	Capacity = 500;
}

alcohol::alcohol(string, string, int, int, int)
{
	this->Name = Name;
	this->Type = Type;
	this->Strength = Strength;
	this->Price = Price;
	this->Capacity = Capacity;
}

bool alcohol::operator==(int ID)
{
	return(this->ID == ID);;
}

