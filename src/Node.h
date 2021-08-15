#pragma once

class Node
{
public:
	Node(int data);
	~Node();

public:
	int data;
	Node* next;

};