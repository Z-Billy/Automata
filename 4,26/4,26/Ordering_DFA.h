#pragma once
#include<string>
template <typename T>
class Ordering_DFA
{
public:
	Ordering_DFA(std::string&);
	~Ordering_DFA();
	void ordering();
private:
	std::string code;
};

