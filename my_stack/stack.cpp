

#include "stack.h"
using namespace  testspace;

	Stack::Stack(size_t in_size) :  array ( new std::string[in_size]), array_size(in_size), current_size(0) {}
	Stack::~Stack() { delete[] array; }
	void Stack::Push(std::string in_str)
	{
		if (current_size == array_size)
		{
			throw std::underflow_error("Stack is full");
		}
		array[current_size] = std::move(in_str);
		++current_size;

	}
	size_t Stack::Size() const
	{
		return array_size;
	}
	size_t Stack::ContainedNumber()
	{
		return current_size;
	}
	void Stack::Pop()
	{
		if (current_size == 0)
		{
			throw std::underflow_error ("Stack is empty");
		}
		--current_size;

	}
	std::string* Stack::Front() 
	{
		if (current_size == 0)
		{
			throw std::underflow_error("Stack is empty");
		}

		return array  ;


	}
