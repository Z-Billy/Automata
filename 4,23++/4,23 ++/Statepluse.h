#pragma once
#include<iostream>
#include<iomanip>
#include<map>
#include "State.h"
class Statepluse :
	public State
{
public:
	explicit Statepluse(std::string&, char, map <char, State*>&, map <State* , char>& , map <State*, char>& );
	Statepluse(const Statepluse& , const State& );
	~Statepluse();
	void initializelocationandvalue();
	State* Next_location(State*);
	State* Next_value(State*);
	const Statepluse &operator=(const Statepluse&);
	bool operator == (const Statepluse&);
private:
	map <State*, char> location;
	map <State*, char> value;
};

