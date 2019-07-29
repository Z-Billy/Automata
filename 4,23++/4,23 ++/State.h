#pragma once
#include<iostream>
#include<iomanip>
#include<map>
class State
{
public:
	explicit State( std::string& , char , map <char, State*>&);
	State(const State&);
	~State();
	void initialize();
	State* Next_state(char);
	const State &operator=(const State&);
	bool operator == (const State&);
protected:
	std::string name;
	map <char, State*> next;
	char order;
};

