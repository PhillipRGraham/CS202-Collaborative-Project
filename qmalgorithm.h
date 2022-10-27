//  October 26, 2022
//	Phillip Graham, Matthew Bringle, Ethen Eisenhower
//	The purpos of this project is to take in a file containing boolean
//	expressions and simplify them according to users sepcifications. The
//	progrma may only take a expression of maximum 32 input variables, and
//	may only have one out put variable 

using namespace std;
#include <tree>

class truthTable ()
{
	public:
		truthTable (string);
	private:
		int numberInputVar;
		string userExpression;
			//	This contains the user readable boolean expression provided.
		tree <char> convertedExpression;
			//	This contains a sequential expression intended to be read
			//	from beginning to end. Essentially, it is the same as the
			//	user expression, but it is inteded to be read from beggining
			//	to end.
		void expressionConvertor;
		void initializeArrays ();
			//	Essentially 
		int * inputArr;
			//	This vector stores the input to our given boolean expression
			//	as an integer. Essentailly a function of 8 inputs would be 
			//	stored as a an input 8 bit integer.
		bool * outputArr;
			//	This array stores the outputs to our given expression as
			//	either a true or false, the given index correlates to a
			//	given input in the inputArr.
};

class qmAlgorithm ()
{
	public:
		
	private:
};

class boolExpression ()
{
};
