#include <algorithm>
#include "tree.h"

//----------------------------------------------------
//	               Constructor
//----------------------------------------------------
tree::tree(){
	root = NULL;
} // constructor

//----------------------------------------------------
//					Print (Private)
//----------------------------------------------------
//prints the data of the ternary tree in order
void tree::print(node * nextNode){
	//initial call with the root of the tree
	
	//if the tree is empty, do nothing
	if(nextNode == NULL)
		return;
	
	//recursively go left until there is no left node
	if(nextNode->leftChild != NULL){
		cout << "(";
		print(nextNode->leftChild);
		cout << ")";
	}
	
	//print the left value of a node
	if(nextNode->leftNumber != -1)
		cout << " " << nextNode->leftNumber << " ";
	
	//recursively go to the middle until there is no middle node
	if(nextNode->middleChild != NULL){
		cout << "(";
		print(nextNode->middleChild);
		cout << ")";
	}
	
	//print the right value of a node
	if(nextNode->rightNumber != -1)
		cout << " " << nextNode->rightNumber << " ";
	
	//recursively go right until there is no right node
	if(nextNode->rightChild != NULL){
		cout << "(";
		print(nextNode->rightChild);
		cout << ")";
	}
}

//----------------------------------------------------
//					Insert (Private)
//Given: an int to insert and a node to traverse
//
//This function recursively looks for the appropiate
//spot for the given int and then places it there
//----------------------------------------------------
void tree::insert(int newData, node * nextNode){
	//initial call with root of tree
	
	if(root == NULL){
		//tree is currently empty
		node * newNode = new node(newData);
		root = newNode;
		//delete newNode;
	}
	else if(nextNode->leftNumber == -1){
		//insert newData into nextNode's leftNumber
		nextNode->leftNumber = newData;
	}
	else if(nextNode->rightNumber == -1){
		//insert newData into nextNode's rightNumber,
		//and checks order of the left and right number
		nextNode->rightNumber = newData;
		if(nextNode->leftNumber > newData)
			swap(nextNode->leftNumber, nextNode->rightNumber);
	}
	else{
		if(newData <= nextNode->leftNumber){
			//go left
			if(nextNode->leftChild == NULL){
				//if no left child, make one
				node * newNode = new node();
				nextNode->leftChild = newNode;
				//delete newNode;
			}
			nextNode = nextNode->leftChild;
			insert(newData, nextNode);
		}
		else if(newData <= nextNode->rightNumber){
			//go middle
			if(nextNode->middleChild == NULL){
				//if no middle child, make one
				node * newNode = new node();
				nextNode->middleChild = newNode;
				//delete newNode;
			}
			nextNode = nextNode->middleChild;
			insert(newData, nextNode);
		}
		else{
			//go right
			if(nextNode->rightChild == NULL){
				//if no right child, make one
				node * newNode = new node();
				nextNode->rightChild = newNode;
				//delete newNode;
			}
			nextNode = nextNode->rightChild;
			insert(newData, nextNode);
			
		}
	}	
}

//public print function
void tree::print(){
	print(root);
	cout << endl;
}

//public insert function
void tree::insert(int newData){
	insert(newData, root);
}