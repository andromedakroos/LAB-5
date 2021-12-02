#pragma once
#include "Header.h"

class alcohol
{
private:

	string Name;
	string Type;
	int Strength;
	int Price;
	int Capacity;
	int ID;
public:
	void set_Name(string);
	void set_Type(string);
	void set_Strength(int);
	void set_Price(int);
	void set_Capacity(int);
	void set_ID(int);
	string get_Name();
	string get_Type();
	int get_Strength();
	int get_Price();
	int get_Capacity();
	int get_ID();
	void output();
	void input();
	int checking(int);
	alcohol();
	alcohol(string, string, int, int, int);
	bool operator== (int);
	

};

