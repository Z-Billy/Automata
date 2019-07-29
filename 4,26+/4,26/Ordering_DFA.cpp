#include "Ordering_DFA.h"
#include"DFA.h"
#include<iostream>
using namespace std;
template<typename T>
Ordering_DFA<T>::Ordering_DFA(std::string& c)
	: code(c)
{
}

template<typename T>
Ordering_DFA<T>::~Ordering_DFA()
{
}

template<typename T>
void Ordering_DFA<T>::ordering()
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
