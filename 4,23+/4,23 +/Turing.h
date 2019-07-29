#pragma once
#include<iostream>
#include<vector>
#include"Statepluse.h"


class Turing
{
public:
	Turing( std::vector<Statepluse*>&, Statepluse* , char* );
	~Turing();
	void ordering();
private:

	std::vector<Statepluse*> turing;
	Statepluse* current;
	// ?? code
	char *head;
};

