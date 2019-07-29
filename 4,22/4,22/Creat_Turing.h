
#include "Creat.h"
template<typename T>
class Creat_Turing :
	public Creat
{
public:// number of different order , number of state , start state , end state 
	explicit Creat_Turing(T*, int=3 , int=3 , int=1 , int=3);
	Creat_Turing(const Creat_Turing& );
	~Creat_Turing();
	void code_initialization();
	virtual void initialization() override;
	virtual void ordering(int , int ) override;
private :
	int start;
	int end;
	T * head;
	int size;
	T** turing;
	int* number;
	int n;
	
};
