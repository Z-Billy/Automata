#include "Creat_Turing.h"


template<typename T>
Creat_Turing<T>::Creat_Turing(T* h, int c, int arrsize, int begin, int finish)
	:size(arrsize > 0 ? arrsize : throw invalid_argument(" Size must be greater than 0")),
	n(c > 0 ? c : throw invalid_argument(" Size must be greater than 0")),
	start(begin), end(finish), head(h), number(new int[++n]), turing(new int **[size])
{
	for (size_t i = 0; i < size; ++i)
	{
		turing [i] = new int*[n];
	}
	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j= 0; j < n ; ++j)
		{
			turing[i][j] = new int[2];
		}
	}

	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j = 0; j < n; ++j)
		{
			for (size_t k = 0; k < 3; ++k)
				tuing[i][j][k] = 0;
		}
	}

	for (size_t i = 0; i < n; ++i)
		number[i] = 0;
}

template<typename T>
Creat_Turing<T>::Creat_Turing(const Creat_Turing &Turingtocopy)
	:size (Turingtocopy.size) , n (++ Turingtocopy.n) , start (Turingtocopy.start) , end (Turingtocopy.end) ,
	head (Turingtocopy.head), number (new int [n]) , turing(new int **[size])
{
	for (size_t i = 0; i < size; ++i)
	{
		turing[i] = new int*[n];
	}
	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j = 0; j < n; ++j)
		{
			turing[i][j] = new int[2];
		}
	}

	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j = 0; j < n; ++j)
		{
			for (size_t k = 0; k < 2; ++k)
				tuing[i][j][k] = Turingtocopy.turing[i][j][k];
		}
	}

	for (size_t i = 0; i < n; ++i)
		number[i] = Turingtocopy.number[i];
}

template<typename T>
Creat_Turing<T>::~Creat_Turing()
{
	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j = 0; j < n; ++j)
			delete[] turing[i][j];
		delete[] turing[i];
	}
	delete[] turing;
	
	delete[] number;
}

template<typename T>
void Creat_Turing<T>::code_initialization()
{
	for (size_t i = 1; i < n; ++i)
		number[i] = i+i;
}

template<typename T>
void Creat_Turing<T>::initialization()
{


}

template<typename T>
void Creat_Turing<T>::ordering(int start , int end )
{
	int order;
	int flag;
	int final = start;
	while ()
	{
		for (size_t i = 1; i < n; ++i)
		{
			if (head == number[i])
			{
				flag = i;
				break;
			}
		}
		order = final;
		head = turing[][flag][order];
		if 
	}

}

