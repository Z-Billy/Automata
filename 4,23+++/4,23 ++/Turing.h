#pragma once
#include<iostream>
#include<vector>
#include"Statepluse.h"


class Turing
{
public:
	Turing(std::vector<Statepluse*>&, Statepluse*, char*);
	~Turing();
	void ordering();
	const Turing &operator=(const Turing&);
	bool operator == (const Turing&);
private:

	std::vector<Statepluse*> turing;
	State* current;
	Statepluse* currentpluse;
	// ?? code
	char *head;
};

