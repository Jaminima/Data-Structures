#pragma once
class LinkedListItem {
public:
	LinkedListItem* next = 0x0;
	int value = 0;

	LinkedListItem(int val) {
		value = val;
	}
};

class LinkedList
{
private:
	unsigned int size = 0;
	LinkedListItem* Head = 0x0;

public:

	//Adds at the very start of the list
	void Add(int value) {
		LinkedListItem* p = new LinkedListItem(value);
		p->next = Head;
		Head = p;
		size++;
	}

	LinkedListItem* First() {
		return Head;
	}

	void RemoveAt(unsigned int pos) {
		LinkedListItem* i = Head;
		for (; pos > 1; pos--) {
			i = i->next;
		}
		i->next = i->next->next;
		size--;
	}

	int ValueAt(unsigned int pos) {
		LinkedListItem* i = Head;
		for (; pos > 0; pos--) {
			i = i->next;
		}
		return i->value;
	}
};
