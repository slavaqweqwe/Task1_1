

#include "stack.h"
using namespace  testspace;

	Stack::Stack(int in_size) : vect(in_size), ch(0) {}
	void Stack::Push(const string& x)
	{
		try
		{
			if (ch == vect.size())
			{
				throw 1;
			}
			vect[ch] = x;
			++ch;
		}
		catch (int i)
		{
			// m.b. need 'exit(1);' or 'std::cerr << "stack is full";'
		}

	}
	int Stack::Size() const
	{
		return vect.size();
	}
	int Stack::ContainedNumber()
	{
		return ch;
	}
	void Stack::Pop()
	{
		try
		{
			if (ch == 0)
			{
				throw 2;
			}
			--ch;
		}
		catch (int i)
		{
			// m.b. need 'exit(2);' or 'std::cerr << "stack is void";'
		}

	}
	string Stack::Front() const
	{
		try
		{
			if (ch == 0)
			{
				throw 3;
			}
			return vect[ch - 1];
		}
		catch (int i)
		{
			// m.b. need 'exit(3);' or 'std::cerr << "stack is void";'
			return "stack is void";
		}

	}
