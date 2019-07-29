#pragma once
#include "Creating.h"
#include<vector>
#include"State.h"
#include<string>

template <typename T>
class DFA :
	public Creating
{
public:
	DFA(std::vector<T>&, State*, State*, State*, char ,std::string &);
	~DFA();
	virtual void delete_state (State* ) override;
	void ordering();
private:
	std::string code;
};

