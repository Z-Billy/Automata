#include "DFA.h"
#include<vector>
#include "State.h"

template<typename T>
DFA<T>::DFA(std::vector<T>& m, State * c, State *s, State *f, char d, std::string & ordercode)
	: Creating (m,c,s,f) ,code(ordercode)
{
}

template<typename T>
DFA<T>::~DFA()
{
}

template<typename T>
void DFA<T>::delete_state(State * d)
{
	vector<State*>flag;
	for (int i = 0; i < sizeof(mashin); ++i)
	{
		if (dfa[i] == d)
		{
			for (int j = i + 1; j < sizeof(mashin); ++i)
			{
				flag[j] = mashin[i];
				dfa.pop_back();
			}
			mashin.pop_back();
			for (int k = 0; k < sizeof(flag); ++k)
				mashin.push_back(flag[i]);
			break;
		}
	}

	for (int i = 0; i < sizeof(mashin); ++i)
	{
		mashin[i]->delete_onestate;
	}

}

template<typename T>
void DFA<T>::ordering()
{
	int temp;
	for (int i = 0; i < sizeof(code); ++i)
	{
		temp = 0;
		for (int i = 0; i < sizeof(mashin); ++i)
		{
			if (current->Next_state(code[i]) == mashin[i])
			{
				temp = 1;
				break;
			}
		}
		if (temp == 1)
			current = current->Next_state(code[i]);
	}

	if (current == final)
		cout << "accept" << endl;
	else
		cout << "reject" << endl;
}


