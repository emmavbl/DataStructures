#include <iostream>
#include <LinkedList.h>
#include <string>

int main()
{
	LinkedList<int> listOfInt;

	listOfInt.add(5);
	listOfInt.add(2);
	listOfInt.add(7);
	listOfInt.add(8);
	listOfInt.add(1);
	listOfInt.print();		// head->5->2->7->8->1->tail

	listOfInt.push(12);
	listOfInt.print();		// head->12->5->2->7->8->1->tail

	listOfInt.reverse();
	listOfInt.print();		// head->1->8->7->2->5->12->tail

	LinkedList<std::string> listOfString;

	listOfString.add("Hello");
	listOfString.add("World");
	listOfString.add("!");
	listOfString.add("Enjoy");
	listOfString.add("C++");
	listOfString.print();	// head->Hello->World->!->Enjoy->C++->tail

	listOfString.reverse();
	listOfString.print();	// head->C++->Enjoy->!->World->Hello->tail

	return 1;
}