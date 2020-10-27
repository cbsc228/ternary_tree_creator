Welcome to my ternary tree creator!
Name:Craig Scarboro

-----DESCRIPTION-----
This program takes a .txt file of interger values and inserts them into a ternary tree data structure.

After doing so, the program then prints out all of the stored values in ascending numerical value accoring to
in order traversal of a tree.

-----TO RUN THE PROGRAM-----
Type 'make' into the command line to compile the executable file and then type './Project2' to begin execution.

Typing 'make clean' will remove the extra object files created in the compilation of the execuatable file.

-----USING THE PROGRAM-----
Once the program has started it will proceed to ask the user for the name of a text file, including the '.txt' that is located
in the same directory as the executable.

If no such file is found the program tells the user this and exits.

After the program opens and reads the .txt file it prints out the data in order in the following format:
(left child) a (middle child) b (right child)
where 'a' and 'b' are elements of the same node, and the children are those nodes underneath
that of 'a' and 'b'.

After printing out all the data the program then exits.