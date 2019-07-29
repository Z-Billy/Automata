#include "DFA.h"
#include<iostream>
#include<string>
using namespace std;

DFA::DFA (string&ordercode , State* c, vector<State*>& d)
	: code(ordercode) , current (c) , dfa (d)
{
}


DFA::~DFA()
{
}


void DFA::ordering()
{
	for (int i = 0; i < sizeof (code); ++i)
	{
		current = current->Next_state(code[i]);
	}

}
