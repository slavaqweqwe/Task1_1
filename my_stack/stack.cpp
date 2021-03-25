// CMakeProject1.cpp: определяет точку входа для приложения.
//


#include "stack.h"
using namespace  testspace;

	Stack::Stack(int in_size) : root(nullptr), size(in_size), ch(0) {}
	int Stack::Push(const int& x)
	{
		if (ch < size)
		{
			ch += 1;
			Node* newnode = new Node;
			newnode->data = x;
			newnode->next = root;
			root = newnode;
			return 0;
		}
		else {
			return 1;
		}

	}
	int Stack::Size() const
	{
		return size;
	}
	int Stack::ContainedNumber()
	{
		return ch;
	}
	void Stack::Pop()
	{
		if (root != nullptr)
		{
			ch -= 1;
			root = root->next;
		}
	}

	int* Stack::Front() const
	{
		return&root->data;
	}

