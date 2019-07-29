#include "Statepluse.h"
#include<iostream>
using namespace std;

Statepluse::Statepluse(std::string& a, char o, map <char, State*>& n,
	map<char, char>& loc, map<char, char>& val)
	: State (a,n,o)
{
		location = loc;
		value = val;
		for (auto& item : location)
			item.second = '0';
		for (auto& item : value)
			item.second = '0';
}

Statepluse::Statepluse(const Statepluse & statepluse, const State&s)
	:State(s)
{
	location = statepluse.location;
	value = statepluse.value;
}


Statepluse::~Statepluse()
{
}

void Statepluse::initializelocationandvalue()
{
	char l, v;
	for (int i = 0; i < sizeof(next); ++i)
	{
		cout << "enput R or L for this state with order " << i << endl;
		cin >> l;
		location[i] = l;
		cout << "enput some characters for this state with order " << i << endl;
		cin >> v;
		value[i] = v;
	}
}

char Statepluse::Next_location(char order)
{
	if (location[order] == '0')
		return '0';
	else
		return location[order];
}

char Statepluse::Next_value(char order)
{
	if (value[order] == '0')
		return '0';
	else
		return value[order];
}

const Statepluse & Statepluse::operator=(const Statepluse & s)
{
	location = s.location;
	value = s.value;
	return *this;
}

bool Statepluse::operator==(const Statepluse & s)
{
	if (location != s.location)
		return false;
	if (value != s.value)
		return false;
	return true;
}

