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

	list.print();

	return 1;
}