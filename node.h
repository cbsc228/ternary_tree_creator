//------------------------------------------
//              class node
//------------------------------------------
// Describes a node in a ternary tree
//------------------------------------------
using namespace std;

class node {
	friend class tree;
public:
	//default constructor
	node(); 
	//overloaded constructor
	node(int newData); 
private:
	int leftNumber;
	int rightNumber;
	node * leftChild;
	node * middleChild;
	node * rightChild;		
};