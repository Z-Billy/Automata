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
	while (*head != ) ////////////////////////////
	{
		*head = currentpluse->Next_value(*head);
		if (currentpluse->Next_location(*head) == 'R')
			++head;
		else if (currentpluse->Next_location(*head) == 'L')
			--head;
		current = current->Next_state(*head);
	}
}

const Turing & Turing::operator=(const Turing &t)
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
}
