#include "Turing.h"
#include<iostream>

using namespace std;
Turing::Turing(std::vector<Statepluse*>& mashin, Statepluse* now, char* h)
	: current(now), turing(mashin), head(h)

{
}


Turing::~Turing()
{
}


void Turing::ordering()
{
	for (int i = 0; i < sizeof(code); ++i)
	{
		head = current->Next_value(code[i]);
		if (current->Next_location(code[i]) == 'R')
			++*head;
		else if (current->Next_location(code[i]) == 'L')
			--*head;
		current = current->Next_state(code[i]);
	}
}

/*const Turing & Turing::operator=(const Turing &t)
{
	current = t.current;
	head = t.head;
	int flag = 0;
	if (sizeof(turing) < sizeof(t.turing))
	{
		flag = sizeof(t.turing) - sizeof(turing);
		for (int i = 0; i < sizeof(turing); ++i)
			turing[i] = t.turing[i];
		for (int i = 0; i <= flag ;++i)
			turing.push_back(t.turing[sizeof(t.turing) + i]);
	}
	else if (sizeof(turing) > sizeof(t.turing))
	{
		flag = sizeof(turing) - sizeof(t.turing);
		for (int i = 0; i < sizeof(t.turing); ++i)
			turing[i] = t.turing[i];
		for (int i = 0; i <= flag; ++i)
			turing.pop_back();
	}
	else
	{
		for (int i = 0; i < sizeof(turing); ++i)
			turing[i] = t.turing[i];
	}
}

bool Turing::operator==(const Turing & t)
{
	if (current != t.current)
		return false;
	if (head != t.head)
		return false;
	if (sizeof(turing) != sizeof(t.turing))
		return false;
	for (int i = 0; i < sizeof(turing); ++i)
		if (turing[i] != t.turing[i])
			return false;
	return true;
}*/
