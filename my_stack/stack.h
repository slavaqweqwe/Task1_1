#pragma once

#include <string>
#include <vector>
using namespace std;

namespace testspace {
	

	class Stack
	{
	public:
		Stack(int in_size);
		void Push(const string& x);
		int Size() const;
		int ContainedNumber();
		void Pop();
		string Front() const;
	private:

		int ch;
		vector<string> vect;
	};
}
