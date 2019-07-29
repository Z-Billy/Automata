#pragma once
#include<iostream>
#include<vector>
#include"State.h"
class DFA
{
public:
	DFA(std::string&, State*, std::vector<State*>&);
	~DFA();
	void ordering();
private:
	std::vector<State*> dfa;
	State* current;
	std::string code;
};

