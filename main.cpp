#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "tree.h"
using namespace std;

//gets the file name from the user
void getFileName(string &fileName){
		cout << "Please enter a file name: ";
		cin >> fileName;
		cout << endl;
}

//return -1 or 0
//0 indicates the file was read successfully
//-1 indicates the file read was not successful
int readDataIn(tree &dataTree, string fileName){
	
	ifstream inputFile;
	string stringNumber;
	int intNumber = 0;
	
	inputFile.open(fileName);
	if(inputFile.fail()){
		cout << "Error: Could not open text file." << endl;
		return -1;
	}
	
	//continually reads in values while there are still values to read in
	while(inputFile >> stringNumber){
		stringstream convert(stringNumber);
		convert >> intNumber;
		if(intNumber >= 0)
			dataTree.insert(intNumber);
	}
	inputFile.close();
	
	return 0;
}


int main(){
	tree dataTree;
	string fileName;
	int fileReadIndicator;
	
	//gets the file name from the user
	getFileName(fileName);
	
	//reads the data in and reports if there is an error doing so
	fileReadIndicator = readDataIn(dataTree, fileName);
	
	//prints out the data if there is no issue
	if(fileReadIndicator == 0)
		dataTree.print();
	else
		cout << "Error: could not print out data" << endl;
	
	return 0;
}