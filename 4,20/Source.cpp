#include<iostream>
#include<stdexcept>
#include<iomanip>
#include<conio.h>
#include<string>
#include "Creat.h"
#include"Creat_DFA.h"
using namespace std;

int main()
{
	string c = "001111111";
	//creat a dfa with number of state that you want & organize start and finish state & the order code
	Creat_DFA (c,5, 1, 4);
	return 0;
 }
