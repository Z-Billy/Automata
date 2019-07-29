#pragma once
#include<iostream>
#include<iomanip>
#include<map>
class State
{
public:
	State(std::string&, char, map <char, State*>&);
	~State();
	void initialize();
	State* Next_state(char);
private:
	std::string name;
	map <char, State*> next ;
	char order;
};

