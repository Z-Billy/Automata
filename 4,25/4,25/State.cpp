#include "State.h"
#include<iostream>
#include<string>
#include<stdexcept>
#include<map>
using namespace std;

State::State(std::string & a, map<char, State*>& n, char o)
{
	order = o;
	name = a;
	next = n;
	for (auto& item : next)
		item.second = nullptr;
}

State::State(const State & state)
	:order(state.order), name(state.name)
{
	next = state.next;
}

State::~State()
{
}


void State::initialize()
{
	State*  s;
	for (int i = 0; i < sizeof(next); ++i)
	{
		cout << "next station with order" << i << "is:" << endl;
		cin >> s;
		next[i] = s;
	}
}

State * State::Next_state(char order)
{
	if (next[order] == nullptr)
		return nullptr;
	else
		return next[order];
}

const State & State::operator=(const State & s)
{
	name = s.name;
	order = s.order;
	next = s.next;
}

bool State::operator==(const State & s)
{
	if (name != s.name)
		return false;
	if (order != s.order)
		return false;
	if (next != s.next)
		return false;
	return true;
}

string State::return_name()
{
	return name;
}


void State::delete_oneedge(char d)
{
	next[d] = nullptr;
}

void State::delete_onestate(State * d)
{
	for (int i = 0; i < sizeof(next); ++i)
		if (next[i] == d)
			next[i] = nullptr;
}

std::istream & operator>>(std::istream & input, State & s)
{
	input >> s.name;
	input >> s.order;
	for (auto & item : s.next)
		input >> item.second;
	return input;
}
