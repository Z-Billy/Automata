#pragma once
#include"State.h"
#include<vector>
template<typename T>
class Creating
{
public:
	Creating(std::vector<T>&, State*, State*, State*, char);
	~Creating();
	void set_start_final(std::vector<T>&);
	virtual void delete_state(State*) = 0;
	void delet_edge(State*, char);
protected:
	std::vector<T>mashin;
	State* current;
	State* start;
	State* final;
	char for_delete_edge;
};


