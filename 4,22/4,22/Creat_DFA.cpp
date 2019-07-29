#include "Creat_DFA.h"
#include<iostream>
#include<stdexcept>
#include<iomanip>
using namespace std;

Creat_DFA::Creat_DFA(string&ordercode, int arrsize, int begin, int finish)
	:size(arrsize > 0 ? arrsize : throw invalid_argument(" Size must be greater than 0")),
	dfa(new int*[size]), start(begin), end(finish), code(ordercode)
{
	for (size_t i = 0; i < size; ++i)
	{
		dfa[i] = new int[2];
	}

	for (size_t i = 0; i < size; ++i)
	{
		dfa[0][i] = 0;
		dfa[1][i] = 0;
	}
}

Creat_DFA::Creat_DFA(const Creat_DFA &DFAtocopy)
	:size(DFAtocopy.size), dfa(new int*[size]), start(DFAtocopy.start), end(DFAtocopy.end), code(DFAtocopy.code)
{
	for (size_t i = 0; i < size; ++i)
		dfa[i] = new int[2];

	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j = 0; j < 2; ++i)
			dfa[i][j] = DFAtocopy.dfa[i][j];
	}
}


Creat_DFA::~Creat_DFA()
{
	for (size_t i = 0; i < size ; ++i)
	{
		delete[] dfa [i];
	}

	delete[] dfa;
}

void Creat_DFA::initialization()
{
	int j;
	//say where you wanna go
	for (size_t i = 0; i < size; ++i)
	{
		dfa[i][0] = i;
		if (i == size - 1)
			dfa[i][1] = 0;
		else
		{
			j = i + 1;
			dfa[i][1] = j;
		}
	}
}

void Creat_DFA::ordering(int start, int end)
{
	int order;
	int final = start;
	for (size_t i = 0; i < code.size(); ++i)
	{
		order = final;
		final = dfa[code[i]][order];
	}
	if (final == end)
		cout << " axcept " << endl;
	else
		cout << "pass" << endl;
}
