#pragma once

class Stack
{
private:
	int* arr;
	unsigned int head = 0, size = 0;

public:

	Stack(unsigned int size) {
		arr = new int[size];
		this->size = size;
	}

	void Push(int val) {
		if (head < size) {
			arr[head] = val;
			head++;
		}
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
