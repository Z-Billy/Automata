#pragma once
#include<iostream>
#include<iomanip>
#include<map>
#include "State.h"
class Statepluse :
	public State
{
public:
	Statepluse(map <State*, char>& , map <State*, char>&);
	~Statepluse();
	void initializelocationandvalue();
	State* Next_location( State*);
	State* Next_value( State*);
private :
	map <State* ,char> location;
	map <State*, char> value;
};

