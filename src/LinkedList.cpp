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
		head = new ListNode(data);
		return;
	}

	ListNode* currentNode = head;

	while (currentNode->next)
	{
		currentNode = currentNode->next;
	}

	currentNode->next = new ListNode(data);
}

void LinkedList::push(int data)
{
	ListNode* previousHead = head;
	head = new ListNode(data);
	head->next = previousHead;
}

void LinkedList::print() const
{
	if (!head) 
		return;

	std::cout << "head->";

	ListNode* currentNode = head;

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

	ListNode* currentNode = head;
	ListNode* previousNode = nullptr;
	ListNode* nextNode;
	while (currentNode)
	{	
		nextNode = currentNode->next;
		currentNode->next = previousNode;
		previousNode = currentNode;
		currentNode = nextNode;
	}
	
	head = previousNode;
}