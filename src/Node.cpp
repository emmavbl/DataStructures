#include <iostream>
#include "Node.h"

ListNode::ListNode(int data)
	:data(data), next(nullptr)
{}

ListNode::~ListNode()
{
	delete next;
}
