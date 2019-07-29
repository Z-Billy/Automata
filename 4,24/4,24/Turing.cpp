#include "Turing.h"
#include<iostream>
#include<string>
using namespace std;

Turing::Turing(std::vector<Statepluse*>& mashin, Statepluse* now, char* h, State*begin ,
	State*end, vector <char>&c ,char deletedge )
	: current(now), turing(mashin), head(h), start(begin), final(end) , for_delete_edge(deletedge)
{
	for (int i = 0; i < 100; ++i)
	{
		code[i] = '£' ;
	}
	int s = sizeof(code) - sizeof(c);
	for (int i = s; i < sizeof(c); ++i)
	{
		code[i] = c[i];
	}
}


Turing::~Turing()
{
}

void Turing::set_start_final()
{
	string flag;
	cout << "enput name of start state" << endl;
	cin >> flag;
	for (int i = 0; i < sizeof(turing); ++i)
		if (turing[i]->return_name == flag)
			start = turing[i];
	cout << "enput name of final state" << endl;
	cin >> flag;
	for (int i = 0; i < sizeof(turing); ++i)
		if ( turing[i]->return_name == flag)
			start = turing[i];
}

void Turing::ordering()
{
	int flag = 0;
	int temp ;
	current = start;
	while (current==final) 
	{
		*head = currentpluse->Next_value(*head);
		if (currentpluse->Next_location(*head) == 'R')
			++head;
		else if (currentpluse->Next_location(*head) == 'L')
			--head;
		temp = 0;
		for (int i = 0; i < sizeof(turing); ++i)
		{
			if (current->Next_state(*head) == turing[i])
			{
				temp = 1;
				break;
			}
		}
		if (temp == 1)
			current = current->Next_state(*head);
		else
		{
			cout << "rejeck" << endl;
			flag = 1;
			break;
		}
			
	}
	if (flag == 0)
		cout << "accept" << endl;
}

void Turing::delete_state(State * d)
{
	vector<Statepluse*>flag;
	for (int i = 0; i < sizeof(turing); ++i)
	{
		if (turing[i] == d)
		{
			for (int j = i + 1; j < sizeof(turing); ++i)
			{
				flag[j] = turing[i];
				turing.pop_back();
			}
			turing.pop_back();
			for (int k = 0; k < sizeof(flag); ++k)
				turing.push_back(flag[i]);
			break;
		}
	}

	for (int i = 0; i < sizeof(turing); ++i)
	{
		turing[i]->delete_onestate;
	}

}

void Turing::delet_edge(State*d , char for_delete_edge)
{
	d->delete_oneedge(for_delete_edge);
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
		for (int i = 0; i <= flag; ++i)
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
