#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"

int main()
{
	Queue s(10);

	s.Push(1);
	s.Push(2);

	auto s1 = s.Pop();
	auto s2 = s.Peek();

	LinkedList l;
	l.Add(1);
	l.Add(2);

	auto l1 = l.ValueAt(0);
	auto l2 = l.ValueAt(1);
}
