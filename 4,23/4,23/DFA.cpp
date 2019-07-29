#include "DFA.h"
#include<iostream>
#include<string>
using namespace std;

DFA::DFA(string&ordercode, State* now, vector<State*>& mashin)
	: code(ordercode), current(now), dfa(mashin)
{
}


DFA::~DFA()
{
}


void DFA::ordering()
{
	for (int i = 0; i < sizeof(code); ++i)
	{
		current = current->Next_state(code[i]);
	}

}
