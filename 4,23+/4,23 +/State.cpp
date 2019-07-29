#include "State.h"
#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;



State::State(string &a, char o, map<char, State*>&n)
	: order(o), name(a)
{
	for (int i = 0; i < sizeof(n); ++i)
		next[i] = n[i];
}

State::~State()
{
}


void State::initialize()
{
	string  s;
	for (int i = 0; i < sizeof(next); ++i)
	{
		cout << "next station with order" << i << "is:" << endl;
		cin >> s;
		if (State s)
			next[i] = s;
		else
			cout << "it isn't a state" << endl;
	}
}

State * State::Next_state(char order)
{
	if (next[order] == nullptr)
		return nullptr;
	else
		return next[order];
}
