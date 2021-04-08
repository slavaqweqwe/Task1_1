#pragma once

#include <string>
#include <iostream>


namespace testspace {
	

	class Stack
	{
	public:
		explicit Stack(size_t in_size);
		Stack::~Stack();
		void Push(std::string in_str);
		size_t Size() const;
		size_t ContainedNumber();
		void Pop();
		std::string* Front() ;
	private:


		size_t current_size;
		size_t array_size;
		std::string* array;
	};
}
