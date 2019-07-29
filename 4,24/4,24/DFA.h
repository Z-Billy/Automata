#pragma once
#include<iostream>
#include<vector>
#include"State.h"

class DFA
{
public:
	DFA(std::string&, State*, std::vector<State*>& , State* , State* , char);
	~DFA();
	void set_start_final();
	void ordering();
	void delete_state(State*);
	void delet_edge(State* , char);
private:
	std::vector<State*> dfa;
	State* current;
	std::string code;
	State* start;
	State* final;
	char for_delete_edge;
};

