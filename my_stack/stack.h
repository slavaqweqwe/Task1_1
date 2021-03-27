﻿// my_sin.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <string>

using namespace std;

namespace testspace {
	
	class Stack
	{
	public:
		Stack(int in_size);
		int Push(const string& x);
		int Size() const;
		int ContainedNumber();
		void Pop();
		string* Front() const;
	private:
		struct Node
		{
			string data;
			Node* next;
		};

		Node* root;
		const int size;
		int ch;
	
	};

}
//namespace testspace {
//	double Sin(double arg);
//}
// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
