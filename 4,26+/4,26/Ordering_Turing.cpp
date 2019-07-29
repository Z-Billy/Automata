#include "Ordering_Turing.h"
#include"Turing.h"
#include<vector>
#include<iostream>
using namespace std;

template<typename T>
inline Ordering_Turing<T>::Ordering_Turing(Statepluse * cp, std::vector<char>& c , char *h)
	: currentpluse(cp) , code(c), head(h)
{
}

template<typename T>
Ordering_Turing<T>::~Ordering_Turing()
{
}

template<typename T>
void Ordering_Turing<T>::ordering()
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
