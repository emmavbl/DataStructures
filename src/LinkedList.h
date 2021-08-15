#pragma once
#include "Node.h"

class LinkedList {

public: 
	LinkedList();
	~LinkedList();

	void add(int data);
	void push(int data);
	void print() const;
	void reverse();

public:
	ListNode* head;
};
