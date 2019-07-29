#include "DFA.h"
#include<vector>
#include "State.h"

template<typename T>
DFA<T>::DFA(std::vector<T>& m, State * c, State *s, State *f, char d)
	: Creating(m, c, s, f)
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



