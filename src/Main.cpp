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

	std::cout << listOfString.search("Emma") << std::endl;	// 0
	std::cout << listOfInt.search(8) << std::endl;			// 1


	std::cout << listOfInt.countElements() << std::endl;	// 6

	LinkedList<float> listOfFloat;
	std::cout << listOfFloat.countElements() << std::endl;	// 0

	std::cout << listOfString.removeLast() << std::endl;	// Hello
	listOfString.print();	// head->C++->Enjoy->!->World->tail

	std::cout << listOfFloat.removeLast() << std::endl;		// 0
	listOfFloat.print();	// head->tail

	listOfFloat.add(5.5);
	listOfFloat.push(9.33);
	std::cout << listOfFloat.removeLast() << std::endl;		// 5.5
	listOfFloat.print();	// head->9.33->tail

	std::cout << listOfInt.pop() << std::endl;				// 1
	std::cout << listOfInt.pop() << std::endl;				// 8
	listOfInt.print();		// head->7->2->5->12->tail
	std::cout << listOfInt.countElements() << std::endl;	// 4

	std::cout << listOfFloat.pop() << std::endl;			// 9.33
	listOfFloat.print();	// head->tail
	
	std::cout << listOfFloat.pop() << std::endl;			// 9.33
	listOfFloat.print();	// head->tail

	return 1;
}