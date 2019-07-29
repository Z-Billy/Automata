#pragma once
#include<iostream>
#include<iomanip>
#include<map>
#include "State.h"
class Statepluse :
	public State
{
public:
	explicit Statepluse ( std::string&, char , map <char, State*>&, map <char , char>& , map <char, char>& );
	Statepluse(const Statepluse& , const State& );
	~Statepluse();
	void initializelocationandvalue();
	char Next_location(char);
	char Next_value(char);
	const Statepluse &operator=(const Statepluse& );
	bool operator == (const Statepluse&);
private:
	map <char, char> location;
	map <char, char> value;
};

