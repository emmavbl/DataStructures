#pragma once
#include "Node.h"

class LinkedList {

public: 
	LinkedList();
	~LinkedList();

	void add(int data);
	void print() const;

public:
	Node* head;
};
