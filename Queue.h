#pragma once
class Queue
{
private:
	int* arr;
	unsigned int head = 0, tail = 0, size = 0;

public:
	Queue(unsigned int size) {
		arr = new int[size];
		this->size = size;
	}

	void Push(int val) {
		if (tail < size) {
			arr[tail] = val;
			tail++;
		}
	}

	int Pop() {
		if (tail > head) {
			head++;
			return arr[head - 1];
		}
	}

	int Peek() {
		if (tail > head) {
			return arr[head];
		}
	}
};
