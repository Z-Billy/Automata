#include "Statepluse.h"
#include<iostream>
using namespace std;

Statepluse::Statepluse(map <State*, char>& loc, map <State*, char>&val)
{
	for (int i = 0; i < sizeof(loc); ++i)
	{
		location[i] = loc[i];
		value[i] = val[i];
	}
}


Statepluse::~Statepluse()
{
}

void Statepluse::initializelocationandvalue()
{
	char l, v;
	for (int i=0 ; i<sizeof(value);++i)
		{
		cout << "enput R or L for this state with order " << i << endl;
		cin >> l;
		location[i] = l;
		cout << "enput some characters for this state with order " << i << endl;
		cin >> v;
		value[i] = v;
		}
}

State * Statepluse::Next_location(State* )
{
	if (location[this] == nullptr)
		return nullptr;
	else
		return location[this];
}

State * Statepluse::Next_value(State* )
{
	if (value[this] == nullptr)
		return nullptr;
	else
		return value[this];
}

