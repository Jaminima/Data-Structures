#pragma once
class Queue
{
private:
	int* arr;
	unsigned int head = 0, tail = 0;

public:
	Queue(unsigned int size) {
		arr = new int[size];
	}

	void Push(int val) {
		arr[tail] = val;
		tail++;
	}

	int Pop() {
		if (tail > head) {
			head++;
			return arr[head-1];
		}
	}

	int Peek() {
		if (tail > head) {
			return arr[head];
		}
	}
};

