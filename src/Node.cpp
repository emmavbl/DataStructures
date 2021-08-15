#include <iostream>
#include "Node.h"

Node::Node(int data)
	:data(data), next(nullptr)
{}

Node::~Node()
{
	delete next;
}
