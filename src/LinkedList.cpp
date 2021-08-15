#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() 
:head(nullptr)
{}

LinkedList::~LinkedList()
{
	delete head;
}

void LinkedList::add(int data)
{
	if (!head) {
		head = new Node(data);
		return;
	}

	Node* currentNode = head;

	while (currentNode->next)
	{
		currentNode = currentNode->next;
	}

	currentNode->next = new Node(data);
	currentNode = nullptr;
}

void LinkedList::print() const
{
	if (!head) 
		return;

	Node* currentNode = head;

	while (currentNode)
	{
		std::cout << currentNode->data << std::endl;
		currentNode = currentNode->next;
	}
	currentNode = nullptr;
}
