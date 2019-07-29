#include "Creating.h"
#include<vector>
using namespace std;

template<typename T>
inline Creating<T>::Creating(vector<T>& m, State* c, State* s, State*f, char o)
	: mashin(m), current(c), start(s), final(f), for_delete_edge(o)
{
}

template<typename T>
inline Creating<T>::~Creating()
{
}

template<typename T>
inline void Creating<T>::set_start_final(vector<T>& myvec)
{
	string flag;
	cout << "enput name of start state" << endl;
	cin >> flag;
	for (int i = 0; i < sizeof(myvec); ++i)
		if (myvec[i]->return_name == flag)
			start = myvec[i];
	cout << "enput name of final state" << endl;
	cin >> flag;
	for (int i = 0; i < sizeof(myvec); ++i)
		if (myvec[i]->return_name == flag)
			start = myvec[i];
}


template<typename T>
void Creating<T>::delet_edge(State *, char)
{
	d->delete_oneedge(for_delete_edge);
}
