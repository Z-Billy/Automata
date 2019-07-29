#pragma once
#include<iostream>
#include<iomanip>
#include<string>
#include<map>

class State
{
	friend std::istream &operator>>(std::istream &, State &);
public:
	explicit State(std::string& , std::map <char,State*>& ,char);
	State(const State&);
	~State();
	void initialize();
	State* Next_state(char);
	const State &operator=(const State&);
	virtual bool operator == (const State&);
	std::string return_name();
	void delete_oneedge(char);
	void delete_onestate(State*);
protected:
	std::string name;
	std::map <char, State*> next;
	char order;
};

