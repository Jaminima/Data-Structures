#pragma once
#include <iostream>

class Stack
{
private:
	 int* arr;
	 unsigned int head = 0;

public:

	Stack(unsigned int size) {
		arr = new int[size];
	}

	void Push(int val) {
		arr[head] = val;
		head++;
	}

	int Pop() {
		if (head > 0) {
			head--;
			return arr[head];
		}
	}

	int Peek() {
		if (head > 0) {
			return arr[head - 1];
		}
	}
};

