#pragma once
#include "ListNode.h"

template<typename T>
class LinkedList {

public: 
	LinkedList::LinkedList()
		:head(nullptr)
	{}

	LinkedList::~LinkedList()
	{
		delete head;
	}

	void LinkedList::add(T data)
	{
		if (!head) {
			head = new ListNode(data);
			return;
		}

		ListNode<T>* currentNode = head;

		while (currentNode->next)
		{
			currentNode = currentNode->next;
		}

		currentNode->next = new ListNode(data);
	}

	void LinkedList::push(T data)
	{
		ListNode<T>* previousHead = head;
		head = new ListNode(data);
		head->next = previousHead;
	}

	T LinkedList::removeLast()
	{
		if (!head)
			return 0;

		ListNode<T>* currentNode = head;
		ListNode<T>* previousNode = nullptr;

		while (currentNode->next)
		{
			previousNode = currentNode;
			currentNode = currentNode->next;
		}

		if (previousNode)
			previousNode->next = nullptr;
		T data = currentNode->data;

		if (currentNode == head)
			head = nullptr;

		delete currentNode;
		return data;
	}

	void LinkedList::print() const
	{
		std::cout << "head->";

		ListNode<T>* currentNode = nullptr;
		if (head)
			currentNode = head;

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

		ListNode<T>* currentNode = head;
		ListNode<T>* previousNode = nullptr;
		ListNode<T>* nextNode = nullptr;
		while (currentNode)
		{
			nextNode = currentNode->next;
			currentNode->next = previousNode;
			previousNode = currentNode;
			currentNode = nextNode;
		}

		head = previousNode;
	}

	bool LinkedList::search(const T data) const
	{
		ListNode<T>* currentNode = head;

		while (currentNode)
		{
			if (currentNode->data == data)
				return true;
			currentNode = currentNode->next;
		}

		return false;
	}

	int LinkedList::countElements() const
	{
		int count = 0;

		ListNode<T>* currentNode = head;
		while (currentNode)
		{
			count++;
			currentNode = currentNode->next;
		}

		return count;
	}

public:
	ListNode<T>* head;
};
