//#pragma once
//------------------------------------------
//              class tree
//------------------------------------------
// A class for a ternary tree
//------------------------------------------
#include <iostream>
#include "node.h"

class tree{
	public:
	tree();
	//user accessible print function
	void print();
	//user accessable insert function
	void insert(int newData);
	
	private:
	//both called by the user accessible insert function with the root of the tree
	void insert(int newData, node * nextNode);
	void print(node * nextNode);
	
	node * root;
	
};