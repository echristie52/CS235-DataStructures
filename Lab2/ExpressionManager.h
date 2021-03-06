#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <sstream>
#include "ExpressionManagerInterface.h"

using namespace std;


class ExpressionManager: public ExpressionManagerInterface
{
public:
	ExpressionManager() {}
	virtual ~ExpressionManager() {}

	/*
	* Checks whether an expression has balanced parentheses
	*/
	bool isBalanced(string expression);

	/*
	* Converts a postfix expression into an infix expression
	* and returns the infix expression.
	*
	* - The given postfix expression will have a space between every number or operator.
	* - The returned infix expression must have a space between every number or operator.
	* - Redundant parentheses are acceptable i.e. ( ( 3 * 4 ) + 5 ).
	* - Check lab requirements for what will be considered invalid.
	*
	* return the string "invalid" if postfixExpression is not a valid postfix expression.
	* otherwise, return the correct infix expression as a string.
	*/
	string postfixToInfix(string postfixExpression);

	/*
	* Evaluates a postfix expression returns the result as a string
	*
	* - The given postfix expression will have a space between every number or operator.
	* - Check lab requirements for what will be considered invalid.
	*
	* return the string "invalid" if postfixExpression is not a valid postfix Expression
	* otherwise, return the correct evaluation as a string
	*/
	string postfixEvaluate(string postfixExpression);

	/*
	* Converts an infix expression into a postfix expression
	* and returns the postfix expression
	*
	* - The given infix expression will have a space between every number or operator.
	* - The returned postfix expression must have a space between every number or operator.
	* - Check lab requirements for what will be considered invalid.
	*
	* return the string "invalid" if infixExpression is not a valid infix expression.
	* otherwise, return the correct postfix expression as a string.
	*/
	string infixToPostfix(string infixExpression);

	vector<string> parseTokens(string expression);	//parses expression

	bool isNum(string token); //verifies digit entry

	bool isOperator(string token); //verifies operator entry

	int operatorPriority(string operation); //prioritizes queue

	bool isBracket(string token); //verifies bracket entry

};
