#pragma once
#include<iostream>
#include<vector>
#include"Statepluse.h"

class Turing
{
public:
	Turing(std::vector<Statepluse*>&, Statepluse*, char* , State* , State* , std::vector<char>& , char);
	~Turing();
	void set_start_final();
	void ordering();
	void delete_state(State*);
	void delet_edge(State*, char);
	const Turing &operator=(const Turing&);
	bool operator == (const Turing&);
private:

	std::vector<Statepluse*> turing;
	State* current;
	Statepluse* currentpluse;
	std::vector<char>code ;
	char*head = &code[50];
	State* start;
	State* final;
	char for_delete_edge;
};

