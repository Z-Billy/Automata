#include "DFA.h"
#include<iostream>
#include<string>
using namespace std;

DFA::DFA(string&ordercode, State* now, vector<State*>& mashin , State* begin , State* end , char c)
	: code(ordercode), current(now), dfa(mashin) ,start(begin),final(end) , for_delete_edge(c)
{
}


DFA::~DFA()
{
}

void DFA::set_start_final()
{
	string flag;
	cout << "enput name of start state" << endl;
	cin >> flag;
	for (int i = 0; i < sizeof(dfa); ++i)
		if (dfa[i]->return_name == flag)
			start = dfa[i];
	cout << "enput name of final state" << endl;
	cin >> flag;
	for (int i = 0; i < sizeof(dfa); ++i)
		if (dfa[i]->return_name == flag)
			start = dfa[i];
}


void DFA::ordering()
{
	int temp;
	for (int i = 0; i < sizeof(code); ++i)
	{
		temp = 0;
		for (int i = 0; i < sizeof(dfa); ++i)
		{
			if (current->Next_state(code[i]) == dfa[i])
			{
				temp = 1;
				break;
			}
		}
		if (temp==1)
			current = current->Next_state(code[i]);
	}

	if (current == final)
		cout << "accept" << endl;
	else
		cout << "reject" << endl;
}

void DFA::delete_state(State * d)
{
	vector<State*>flag;
	for (int i = 0; i < sizeof(dfa); ++i)
	{
		if (dfa[i] == d)
		{
			for (int j = i + 1; j < sizeof(dfa); ++i)
			{
				flag[j] = dfa[i];
				dfa.pop_back();
			}
			dfa.pop_back();
			for (int k = 0; k < sizeof(flag); ++k)
				dfa.push_back(flag[i]);
			break;
		}
	}

	for (int i = 0; i < sizeof(dfa); ++i)
	{
		dfa[i]->delete_onestate;
	}

}

void DFA::delet_edge(State* d, char for_delete_edge)
{
	d->delete_oneedge(for_delete_edge);
}
