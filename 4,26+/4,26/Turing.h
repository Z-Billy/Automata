#pragma once
#include "Creating.h"
#include<iostream>
#include<vector>
#include"Statepluse.h"
template<typename T>

class Turing :
	public Creating
{
public:
	Turing(std::vector<T>&, State*, State*, State*, char, Statepluse*, std::vector<char>&, char);
	~Turing();
	virtual void delete_state(State *) override;
	const Turing &operator=(const Turing&);
	bool operator == (const Turing&);
};


