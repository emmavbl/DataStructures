#include <iostream>
#include <Node.h>
#include <LinkedList.h>

int main()
{
	LinkedList list;

	list.add(5);
	list.add(2);
	list.add(7);
	list.add(8);
	list.add(1);
	list.print();	// head->5->2->7->8->1->tail

	list.push(12);
	list.print();	// head->12->5->2->7->8->1->tail

	list.reverse();
	list.print();	// head->1->8->7->2->5->12->tail
	
	return 1;
}