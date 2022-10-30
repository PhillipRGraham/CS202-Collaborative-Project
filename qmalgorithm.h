//  October 26, 2022
//	Phillip Graham
//	The purpos of this project is to take in a file containing boolean
//	expressions and simplify them according to the Quine-McCluskey alorithm.
//	The program may only take a expression of maximum 32 input variables
//	and may only have one output variable 

using namespace std;
#include <string>

//	Represents either a boolean variable or operation on two variables.
class treeNode
{
	public:
		treeNode(char);
		~treeNode();

		treeNode * getLeftChild ();
		treeNode * getRightChild ();
		treeNode * getParent ();
		char getNodeContents ();
	private:

		char nodeContents;
		treeNode * parent;
		treeNode * leftChild;
		treeNode * rightChild;
};

//	Represents a boolean expresion in the form of a binary tree
class equationTree
{
	public:
		equationTree();
		~equationTree();
			
		//	Travels down tree and executes boolean expression
		bool calculate (int, char *);
	private:
		treeNode * rootNode;
};

//	Contains both user readable and function readbale boolean expression 
class booleanExpression
{
	public:
		booleanExpression (string);
		~booleanExpression ();

		int getNumberPossibleInputs();
		bool getTableOutput (int);
	private:
		string userReadableExpression;
		char * inputVariableArr;
		equationTree treeRepresentation;

		void generateTable ();
		bool * tableOutputArr;
};

class qmAlgorithm
{
	public:
		qmAlgorithm ();
		~qmAlgorithm ();
	private:
		booleanExpression * expressionArr;
		string generateMSOP(booleanExpression &);
		void addExpression ();
		int numExpression;
};

