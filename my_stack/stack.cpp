

#include "stack.h"
using namespace  testspace;

	Stack::Stack(size_t in_size) :  array ( new std::string[in_size]), array_size(in_size), ch(0) {}
	Stack::~Stack() { delete[] array; }
	void Stack::Push(const string& x)
	{
		if (ch == array_size)
		{
			throw std::underflow_error("Stack is full");
		}
		array[ch] = x;
		++ch;

	}
	size_t Stack::Size() const
	{
		return array_size;
	}
	size_t Stack::ContainedNumber()
	{
		return ch;
	}
	void Stack::Pop()
	{
		if (ch == 0)
		{
			throw std::underflow_error ("Stack is empty");
		}
		--ch;

	}
	string* Stack::Front() 
	{
		if (ch == 0)
		{
			throw std::underflow_error("Stack is empty");
		}

		return array  ;


	}
