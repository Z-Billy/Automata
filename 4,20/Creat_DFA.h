#pragma once
#include<string>
#include "Creat.h"
class Creat_DFA :
	public Creat
{
public:
	explicit Creat_DFA(std::string&, int= 3 , int=1, int=3 );
	Creat_DFA(const Creat_DFA&);
	~Creat_DFA();
	virtual void initialization() override;
	virtual void ordering (int start , int end ) override;
private :
	int size;
	int**dfa;
	int start;
	int end;
	std::string code;
};

