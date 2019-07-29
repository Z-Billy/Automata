#include "Statepluse.h"
#include<iostream>
using namespace std;


Statepluse::Statepluse(std::string& a, char o, map <char, State*>& n ,
	map<State*, char>& loc , map<State*, char>& val )
	:State (a,o,n)
{
	location = loc;
	value = val;
	for(auto & i : location)
		i = '0';

	for (auto j :value )
		value[j] = '0';
}

Statepluse::Statepluse(const Statepluse & statepluse , const State&s)
	:State (s)
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
	for (int i = 0; i < sizeof(value); ++i)
	{
		cout << "enput R or L for this state with order " << i << endl;
		cin >> l;
		location[i] = l;
		cout << "enput some characters for this state with order " << i << endl;
		cin >> v;
		value[i] = v;
	}
}

State * Statepluse::Next_location(State*)
{
	if (location[this] == nullptr)
		return nullptr;
	else
		return location [this];
}

State * Statepluse::Next_value(State*)
{
	if (value[this] == nullptr)
		return nullptr;
	else
		return value[this];
}

const Statepluse & Statepluse::operator=(const Statepluse & s)
{
	location = s.location;
	value = s.value;
}

bool Statepluse::operator==(const Statepluse & s)
{
	if(location != s.location)
	return false;
	if (value != s.value)
		return false;
	return true;
}

