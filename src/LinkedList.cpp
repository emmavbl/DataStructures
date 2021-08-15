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
}

void LinkedList::push(int data)
{
	Node* previousHead = head;
	head = new Node(data);
	head->next = previousHead;
}

void LinkedList::print() const
{
	if (!head) 
		return;

	std::cout << "head->";

	Node* currentNode = head;

	while (currentNode)
	{
		std::cout << currentNode->data << "->";
		currentNode = currentNode->next;
	}

	std::cout << "tail" << std::endl;
}

void LinkedList::reverse()
{
	if (!head)
		return;

	Node* currentNode = head;
	Node* previousNode = nullptr;
	Node* nextNode;
	while (currentNode)
	{	
		nextNode = currentNode->next;
		currentNode->next = previousNode;
		previousNode = currentNode;
		currentNode = nextNode;
	}
	
	head = previousNode;
}