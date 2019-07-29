#include "Turing.h"
#include<vector>
#include"Statepluse.h"

template<typename T>
Turing<T>::Turing(std::vector<T>& m, State *c, State *s, State *f, char o, 
	Statepluse * cp , std::vector<char>& ordercode, char h)
	: Creating(m, c, s, o), code(ordercode) , head(h)
{
}

template<typename T>
Turing<T>::~Turing()
{
}

template<typename T>
void Turing<T>::delete_state(State * d)
{
	vector<Statepluse*>flag;
	for (int i = 0; i < sizeof(mashin); ++i)
	{
		if (mashin[i] == d)
		{
			for (int j = i + 1; j < sizeof(mashin); ++i)
			{
				flag[j] = turing[i];
				mashin.pop_back();
			}
			turing.pop_back();
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
void Turing<T>::ordering()
{
	int flag = 0;
	int temp;
	current = start;
	while (current == final)
	{
		*head = currentpluse->Next_value(*head);
		if (currentpluse->Next_location(*head) == 'R')
			++head;
		else if (currentpluse->Next_location(*head) == 'L')
			--head;
		temp = 0;
		for (int i = 0; i < sizeof(mashin); ++i)
		{
			if (current->Next_state(*head) == mashin[i])
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

template<typename T>
const Turing & Turing<T>::operator=(const Turing &)
{
	current = t.current;
	head = t.head;
	int flag = 0;
	if (sizeof(mashin) < sizeof(t.mashin))
	{
		flag = sizeof(t.mashin) - sizeof(mashin);
		for (int i = 0; i < sizeof(mashin); ++i)
			mashin[i] = t.mashin[i];
		for (int i = 0; i <= flag; ++i)
			mashin.push_back(t.mashin[sizeof(t.mashin) + i]);
	}
	else if (sizeof(mashin) > sizeof(t.mashin))
	{
		flag = sizeof(mashin) - sizeof(t.mashin);
		for (int i = 0; i < sizeof(t.mashin); ++i)
			mashin[i] = t.mashin[i];
		for (int i = 0; i <= flag; ++i)
			mashin.pop_back();
	}
	else
	{
		for (int i = 0; i < sizeof(mashin); ++i)
			mashin[i] = t.mashin[i];
	}
}

template<typename T>
bool Turing<T>::operator==(const Turing &)
{
	if (current != t.current)
		return false;
	if (head != t.head)
		return false;
	if (sizeof(turing) != sizeof(t.mashin))
		return false;
	for (int i = 0; i < sizeof(mashin); ++i)
		if (mashin[i] != t.mashin[i])
			return false;
	return true;
}
