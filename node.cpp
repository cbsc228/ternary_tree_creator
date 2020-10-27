#include <iostream>
#include <iomanip>
#include "node.h"

//------------------------------------------
//         constructors
//------------------------------------------
node::node() {
	leftNumber = -1;
	rightNumber = -1;
	leftChild = NULL;
	middleChild = NULL;
	rightChild = NULL;
} // constructor (default)

node::node(int newData) {
	leftNumber = newData;
	rightNumber = -1;
	leftChild = NULL;
	middleChild = NULL;
	rightChild = NULL;
} // overloaded constructor
