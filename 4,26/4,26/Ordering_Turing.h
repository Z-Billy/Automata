#pragma once
#include"Turing.h"
#include<vector>
template <typename T>
class Ordering_Turing
{
public:
	Ordering_Turing(Statepluse* , std::vector<char>& , char*);
	~Ordering_Turing();
	void ordering();
private:
	Statepluse* currentpluse;
	std::vector<char>code;
	char*head = &code[50];
};

