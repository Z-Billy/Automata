#pragma once
#include<iostream>
#include<iomanip>
#include<map>
#include "State.h"

class Statepluse :
	public State
{
public:
	explicit Statepluse(std::string&, char, std::map <char, State*>&, std::map <char, char>&, std::map <char, char>&);
	Statepluse(const Statepluse&, const State&);
	~Statepluse();
	void initializelocationandvalue();
	char Next_location(char);
	char Next_value(char);
	const Statepluse &operator=(const Statepluse&);
	bool operator == (const Statepluse&);
private:
	std::map <char, char> location;
	std::map <char, char> value;
};

