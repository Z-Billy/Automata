#pragma once
#include<iostream>
#include<vector>
#include"State.h"
#include<map> 
#include<string>
class Turing
{
public:
	Turing(map<char, State*>&, std::vector<State*>& , State*);
	~Turing();
	void initialization();
	void ordering();
private:
	map <char, string> text;
	std::vector<State*> turing;
	State* current;
	// ?? code
	//?? *head
};

