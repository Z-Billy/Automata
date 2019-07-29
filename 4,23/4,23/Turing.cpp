#include "Turing.h"
#include<iostream>
#include<string>
using namespace std;
Turing::Turing( map<char, State*>& t, std::vector<State*>& mashin, State* now)
	 :  current(now), turing(mashin)

{
	for (int i = 0; i < sizeof(t); ++i)
		text[i] = t[i];
}


Turing::~Turing()
{
}

void Turing::initialization()
{
	string s;
	for (int i = 0; i < sizeof(text); ++i)
	{
		cout << "enput the value for state" << i << endl;
		cin >> s
		text[i] = s;
	}
}

void Turing::ordering()
{
	for (int i = 0; i < sizeof(code); ++i)
	{
		
	}
}
