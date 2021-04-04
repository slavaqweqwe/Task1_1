#pragma once

#include <string>
#include <iostream>
using namespace std;

namespace testspace {
	

	class Stack
	{
	public:
		explicit Stack(size_t in_size);
		Stack::~Stack();
		void Push(const string& x);
		size_t Size() const;
		size_t ContainedNumber();
		void Pop();
		string* Front() ;
	private:


		size_t ch;
		size_t array_size;
		string* array;
	};
}
