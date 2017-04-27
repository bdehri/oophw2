#include <iostream>
#include "AdderRemover.h"
#include "FAFR.h"
#include "FALR.h"
#include "LAFR.h"
#include "LALR.h"

int main(int argc, char **argv) {

	AdderRemover *myList[4];

	myList[0] = new FAFR();
	myList[1] = new LALR();
	myList[2] = new FALR();
	myList[3] = new LAFR();

	for (int j = 0; j<4; j++) {
		for (int i = 0; i<5; i++)
			myList[j]->add(i);
	}

	for (int j = 0; j<4; j++) {
		myList[j]->remove();
		myList[j]->display();
		myList[j]->removeAll();
		myList[j]->display();
	}

	std::cout << std::endl << "Test case for ARTraverser" << std::endl;
	for (int j = 0; j<4; j++) {
		for (int i = 0; i<5; i++)
			myList[j]->add(i);
		myList[j]->remove();
	}

	for (int j = 0; j<4; j++) {
		myList[j]->setTraverser();
		myList[j]->traverse();
	}
	system("PAUSE");
	return 0;
}