#pragma once

template<typename T>
class ListNode
{
public:
	ListNode::ListNode(T data)
		:data(data), next(nullptr)
	{}

	ListNode::~ListNode()
	{
		delete next;
	}

public:
	T data;
	ListNode* next;

};