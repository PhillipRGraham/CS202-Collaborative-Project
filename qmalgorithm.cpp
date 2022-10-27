//  October 27, 2022
//  Phillip Graham, Mathew Bringle, Ethan Eisenhower
//  This is the main file to describe the behavior of our Quine McClusky
//  boolean expression simplifier.

#include "qmalgorithm.h"
#include <string>

truthTable::truthTable (string userExpressionParam)
{
	userExpression = userExpressionParam;
	
	//	Look at all of the characters in the expression to determine
	//	thenumber of unique inputs
	
	char maxChar = 'a';
	int numberInputVar = 1;
	for (unsigned int i = 0; i < userExpression.length(); i++)
	{
		char testingCharcter = userExpression[i];
		if ('a' <= testingCharacter && testingCharacter <= 'z')
		{
			if (userExpression[i] > maxChar)
			{
				maxChar = userExpression[i];
				numberInputVar++;
			}
		}
	}

	//	Initialize the arrays, if there are n number inputs variables, the 
	//	size of hte arrays ill be 2^n.
	int maximumValue = 2;
	for (int i = 1; i < numberInputVar; i++)
	{
		maximumValue = 2 * maximumValue;
	}

	inputArr = new int [maximumValue + 1];

	for (int i = 0; i < maximumValue + 1; i++)
	{
		inputArr[i] = i;
	}

}
