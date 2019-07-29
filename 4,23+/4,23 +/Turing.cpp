#include "Turing.h"
#include<iostream>

using namespace std;
Turing::Turing(std::vector<Statepluse*>& mashin, Statepluse* now, char* h)
	: current(now), turing(mashin) , head (h)

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
		else if ( current->Next_location(code[i]) == 'L')
			--*head;
		current = current->Next_state(code[i]);
	}
}
