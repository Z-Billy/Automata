#pragma once
class Creat
{
public:
	Creat();
	~Creat();
	virtual void initialization() = 0;
	virtual void ordering(int, int) = 0;
};

