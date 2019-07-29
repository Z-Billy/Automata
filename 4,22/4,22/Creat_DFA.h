#pragma once
#include<string>
#include "Creat.h"
class Creat_DFA :
	public Creat
{
public://number of state , start state , end state 
	explicit Creat_DFA(std::string&, int = 3, int = 1, int = 3);
	Creat_DFA(const Creat_DFA&);
	~Creat_DFA();
	virtual void initialization() override;
	virtual void ordering(int, int) override;
private:
	int size;
	int**dfa;
	int start;
	int end;
	std::string code;
};

